cmake_minimum_required(VERSION 3.20)

# Host application for the N64Recomp output of Conker's Bad Fur Day (US).
# RecompiledFuncs/ must exist first (`sh recomp/run.sh`).
#
# Windows (RT64 window, keyboard and controllers) with MSVC:
#   host\build_windows.cmd   (sets up MSVC, then configures and builds host/build-win)
# Linux/WSL (headless, null renderer):
#   cmake -S host -B host/build -G Ninja -DCMAKE_C_COMPILER=clang -DCMAKE_CXX_COMPILER=clang++ -DCMAKE_BUILD_TYPE=RelWithDebInfo
#   cmake --build host/build

project(ConkerRecomp C CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_CXX_EXTENSIONS OFF)
# MSVC compiles C as C89 unless told otherwise; o1heap needs C99.
set(CMAKE_C_STANDARD 11)

if (WIN32)
    option(CONKER_RT64 "Render with RT64 in an SDL window" ON)
else()
    option(CONKER_RT64 "Render with RT64 in an SDL window" OFF)
endif()

set(REPO_ROOT "${CMAKE_CURRENT_SOURCE_DIR}/..")
set(RT64_DIR "${REPO_ROOT}/tools/rt64")

add_subdirectory("${REPO_ROOT}/tools/N64ModernRuntime" "${CMAKE_CURRENT_BINARY_DIR}/N64ModernRuntime")
if (MSVC)
    # MSVC 14.51 hits an internal compiler error optimising librecomp's flash.cpp.
    set_source_files_properties("${REPO_ROOT}/tools/N64ModernRuntime/librecomp/src/flash.cpp"
        DIRECTORY "${REPO_ROOT}/tools/N64ModernRuntime/librecomp"
        PROPERTIES COMPILE_OPTIONS "/Od")
endif()

# The recompiled game code. recomp/run.sh records hashes of the files that shape it; stop if
# any has changed since, as the build would otherwise quietly use stale code.
set(RECOMP_INPUTS conker.toml recomp/prepare_elf.py recomp/n64recomp.patch recomp/emit_tlb_pages.py recomp/audio_ucode.toml)
set(RECOMP_STAMP "${REPO_ROOT}/RecompiledFuncs/inputs.sha256")
if (NOT EXISTS "${RECOMP_STAMP}")
    message(FATAL_ERROR "RecompiledFuncs/ is missing or predates input tracking: run `sh recomp/run.sh` (in WSL on Windows).")
endif()
file(READ "${RECOMP_STAMP}" RECOMP_STAMP_TEXT)
set(RECOMP_EXPECTED "")
foreach(input ${RECOMP_INPUTS})
    file(READ "${REPO_ROOT}/${input}" input_text)
    string(REPLACE "\r" "" input_text "${input_text}")
    string(SHA256 input_hash "${input_text}")
    string(APPEND RECOMP_EXPECTED "${input_hash} ${input}\n")
    set_property(DIRECTORY APPEND PROPERTY CMAKE_CONFIGURE_DEPENDS "${REPO_ROOT}/${input}")
endforeach()
set_property(DIRECTORY APPEND PROPERTY CMAKE_CONFIGURE_DEPENDS "${RECOMP_STAMP}")
if (NOT RECOMP_STAMP_TEXT STREQUAL RECOMP_EXPECTED)
    message(FATAL_ERROR "RecompiledFuncs/ is out of date (${RECOMP_INPUTS} changed since it was generated): run `sh recomp/run.sh` (in WSL on Windows), then build again.")
endif()
file(GLOB RECOMPILED_FUNCS CONFIGURE_DEPENDS "${REPO_ROOT}/RecompiledFuncs/funcs_*.c")
add_library(RecompiledFuncs STATIC ${RECOMPILED_FUNCS} "${REPO_ROOT}/RecompiledFuncs/tlb_pages.c")
target_include_directories(RecompiledFuncs PRIVATE
    "${REPO_ROOT}/tools/N64ModernRuntime/N64Recomp/include"
    "${REPO_ROOT}/RecompiledFuncs"
)
# funcs.h does not declare the libultra functions N64Recomp skips (the runtime
# provides them), and the generated code has many unused labels and variables.
# setjmp.h is for conker.toml's hooks on the script interpreter's abort (func_150AE280).
if (MSVC)
    target_compile_options(RecompiledFuncs PRIVATE /W0 /bigobj /FIsetjmp.h)
else()
    target_compile_options(RecompiledFuncs PRIVATE
        -include setjmp.h
        -Wno-implicit-function-declaration
        -Wno-unused-label
        -Wno-unused-variable
        -Wno-unused-but-set-variable
        -fno-strict-aliasing
    )
endif()

add_executable(ConkerRecomp
    src/main.cpp
    src/null_renderer.cpp
    src/overlays.cpp
    src/ultra_extras.cpp
    src/mod_api.cpp
    # The audio microcode, recompiled by RSPRecomp (recomp/audio_ucode.toml, run by recomp/run.sh).
    "${REPO_ROOT}/RecompiledFuncs/rsp/audio_ucode.cpp"
)
if (MSVC)
    set_source_files_properties("${REPO_ROOT}/RecompiledFuncs/rsp/audio_ucode.cpp" PROPERTIES COMPILE_OPTIONS "/W0;/bigobj")
endif()
target_include_directories(ConkerRecomp PRIVATE
    "${REPO_ROOT}/tools/N64ModernRuntime/N64Recomp/include"
    "${REPO_ROOT}/RecompiledFuncs"
)
target_link_libraries(ConkerRecomp PRIVATE RecompiledFuncs librecomp ultramodern)

if (CONKER_RT64)
    set(RT64_STATIC ON CACHE BOOL "" FORCE)
    add_subdirectory("${RT64_DIR}" "${CMAKE_CURRENT_BINARY_DIR}/rt64")

    # RecompFrontend: the launcher, config and mod menus (recompui, on RmlUi) and
    # remappable input (recompinput). tools/RecompFrontend is an untracked checkout.
    if (WIN32)
        set(sdl2_SOURCE_DIR "${RT64_DIR}/src/contrib/mupen64plus-win32-deps/SDL2-2.26.3")
    endif()
    set(RECOMP_FRONTEND_N64MODERNRUNTIME_PATH "${REPO_ROOT}/tools/N64ModernRuntime")
    set(RECOMP_FRONTEND_RT64_PATH "${RT64_DIR}")
    # recompui compiles its shaders with rt64's build_*_shader functions, which use
    # these variables from rt64's own directory scope: repeat them here.
    set(DXC_COMMON_OPTS "-I${RT64_DIR}/src")
    set(DXC_DXIL_OPTS "-Wno-ignored-attributes")
    set(DXC_SPV_OPTS "-spirv" "-fspv-target-env=vulkan1.0" "-fvk-use-dx-layout")
    set(DXC_PS_OPTS "${DXC_COMMON_OPTS}" "-E" "PSMain" "-T ps_6_0" "-D DYNAMIC_RENDER_PARAMS")
    set(DXC_VS_OPTS "${DXC_COMMON_OPTS}" "-E" "VSMain" "-T vs_6_0" "-D DYNAMIC_RENDER_PARAMS" "-fvk-invert-y")
    if (WIN32)
        set(DXC "${RT64_DIR}/src/contrib/dxc/bin/x64/dxc.exe")
    else()
        set(DXC "LD_LIBRARY_PATH=${RT64_DIR}/src/contrib/dxc/lib/x64" "${RT64_DIR}/src/contrib/dxc/bin/x64/dxc-linux")
    endif()
    add_subdirectory("${REPO_ROOT}/tools/RecompFrontend" "${CMAKE_CURRENT_BINARY_DIR}/RecompFrontend")
    if (MSVC)
        # Their GCC-style -Wno-unused-parameter is an error for cl.
        set_property(TARGET recompui recompinput PROPERTY COMPILE_OPTIONS "")
    endif()
    target_link_libraries(ConkerRecomp PRIVATE recompui recompinput nfd)
    # recompui loads its fonts, icons and style sheet from assets/ next to the executable.
    add_custom_command(TARGET ConkerRecomp POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy_directory "${CMAKE_CURRENT_SOURCE_DIR}/assets" "$<TARGET_FILE_DIR:ConkerRecomp>/assets")

    target_sources(ConkerRecomp PRIVATE src/frontend.cpp src/conker_config.cpp src/audio_output.cpp)
    # CONKER_RT64 selects the window build; the rest are what rt64 compiles its own headers with.
    target_compile_definitions(ConkerRecomp PRIVATE CONKER_RT64 HLSL_CPU)
    if (WIN32)
        target_compile_definitions(ConkerRecomp PRIVATE NOMINMAX)
    endif()
    # rt64 sets its include paths per directory, so repeat the ones its headers need.
    target_include_directories(ConkerRecomp PRIVATE
        "${RT64_DIR}/src"
        "${RT64_DIR}/src/contrib"
        "${RT64_DIR}/src/contrib/plume"
        "${RT64_DIR}/src/contrib/imgui"
        "${RT64_DIR}/src/contrib/hlslpp/include"
        "${RT64_DIR}/src/contrib/mupen64plus-core/src/api"
        "${RT64_DIR}/src/contrib/nativefiledialog-extended/src/include"
    )
    target_link_libraries(ConkerRecomp PRIVATE rt64)

    if (WIN32)
        set(SDL2_DIR "${RT64_DIR}/src/contrib/mupen64plus-win32-deps/SDL2-2.26.3")
        target_include_directories(ConkerRecomp PRIVATE "${SDL2_DIR}/include" "${RT64_DIR}/src/contrib/dxc/inc")
        target_link_directories(ConkerRecomp PRIVATE "${SDL2_DIR}/lib/x64")
        target_link_libraries(ConkerRecomp PRIVATE SDL2)
        # Runtime DLLs next to the executable: SDL2, and DXC which RT64 loads at startup.
        add_custom_command(TARGET ConkerRecomp POST_BUILD
            COMMAND ${CMAKE_COMMAND} -E copy_if_different
                "${SDL2_DIR}/lib/x64/SDL2.dll"
                "${RT64_DIR}/src/contrib/dxc/bin/x64/dxcompiler.dll"
                "${RT64_DIR}/src/contrib/dxc/bin/x64/dxil.dll"
                "$<TARGET_FILE_DIR:ConkerRecomp>")
    else()
        find_package(SDL2 REQUIRED)
        target_include_directories(ConkerRecomp PRIVATE ${SDL2_INCLUDE_DIRS})
        target_link_libraries(ConkerRecomp PRIVATE ${SDL2_LIBRARIES})
    endif()
endif()

if (UNIX)
    # Exported symbols let the crash handler's backtrace name recompiled functions.
    target_link_options(ConkerRecomp PRIVATE -rdynamic)
elseif (WIN32)
    # The crash handler symbolises the stack with DbgHelp.
    target_link_libraries(ConkerRecomp PRIVATE DbgHelp)
    # Mods replace recompiled functions by patching their machine code, so identical
    # functions must not be folded into one.
    target_link_options(ConkerRecomp PRIVATE /OPT:NOICF)
endif()
