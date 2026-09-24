cmake_minimum_required(VERSION 3.20)

# Host application for the N64Recomp output of Conker's Bad Fur Day (US).
# Build (WSL/Linux):
#   cmake -S host -B host/build -G Ninja -DCMAKE_C_COMPILER=clang -DCMAKE_CXX_COMPILER=clang++ -DCMAKE_BUILD_TYPE=RelWithDebInfo
#   cmake --build host/build
# RecompiledFuncs/ must exist first (`sh recomp/run.sh`).

project(ConkerRecomp C CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_CXX_EXTENSIONS OFF)

set(REPO_ROOT "${CMAKE_CURRENT_SOURCE_DIR}/..")

add_subdirectory("${REPO_ROOT}/tools/N64ModernRuntime" "${CMAKE_CURRENT_BINARY_DIR}/N64ModernRuntime")

# The recompiled game code.
file(GLOB RECOMPILED_FUNCS CONFIGURE_DEPENDS "${REPO_ROOT}/RecompiledFuncs/funcs_*.c")
add_library(RecompiledFuncs STATIC ${RECOMPILED_FUNCS} "${REPO_ROOT}/RecompiledFuncs/tlb_pages.c")
target_include_directories(RecompiledFuncs PRIVATE
    "${REPO_ROOT}/tools/N64ModernRuntime/N64Recomp/include"
    "${REPO_ROOT}/RecompiledFuncs"
)
# funcs.h does not declare the libultra functions N64Recomp skips (the runtime
# provides them), and the generated code has many unused labels and variables.
target_compile_options(RecompiledFuncs PRIVATE
    -Wno-implicit-function-declaration
    -Wno-unused-label
    -Wno-unused-variable
    -Wno-unused-but-set-variable
    -fno-strict-aliasing
)

add_executable(ConkerRecomp
    src/main.cpp
    src/null_renderer.cpp
    src/overlays.cpp
    src/ultra_extras.cpp
)
target_include_directories(ConkerRecomp PRIVATE
    "${REPO_ROOT}/tools/N64ModernRuntime/N64Recomp/include"
    "${REPO_ROOT}/RecompiledFuncs"
)
target_link_libraries(ConkerRecomp PRIVATE RecompiledFuncs librecomp ultramodern)

if (UNIX)
    # Exported symbols let the crash handler's backtrace name recompiled functions.
    target_link_options(ConkerRecomp PRIVATE -rdynamic)
endif()
