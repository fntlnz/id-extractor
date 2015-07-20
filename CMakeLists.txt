cmake_minimum_required(VERSION 3.0 FATAL_ERROR)
project(idextractor VERSION 0.1 LANGUAGES C CXX)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -fpermissive")
set (CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/CMake")
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_EXPORT_COMPILE_COMMANDS 1)
set(COMMON_INCLUDES ${PROJECT_SOURCE_DIR}/include)

enable_testing()

add_subdirectory(src)
add_subdirectory(test)
add_subdirectory(run)


# Other Targets (to move away)
add_custom_target(vcs-clean
    COMMAND find . -name "CMakeFiles" | xargs rm -rfv
    COMMAND find . -name "Makefile" | xargs rm -rfv
    COMMAND find . -name "cmake_install.cmake" | xargs rm -rfv
    COMMAND find . -name "CMakeCache.txt" | xargs rm -rfv
    COMMAND find . -name "CTestTestfile.cmake" | xargs rm -rfv
    COMMAND rm -vrf Testing
    COMMAND rm -vrf bin
    COMMAND rm -vrf lib
    COMMAND rm -vrf compile_commands.json
)
