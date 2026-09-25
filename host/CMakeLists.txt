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

# The recompiled game code.
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

    target_sources(ConkerRecomp PRIVATE src/rt64_renderer.cpp src/window_input.cpp src/audio_output.cpp)
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
    # The crash handler symbolises the stack with DbgHelp; Comdlg32 has the ROM file dialog.
    target_link_libraries(ConkerRecomp PRIVATE DbgHelp Comdlg32)
endif()
