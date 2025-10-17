cmake_minimum_required(VERSION 3.10.0)
project(DVDBounce)

# Define C++ standard used
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Set the output directory for executable
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ../bin)

set(CMAKE_PREFIX_PATH /ucrt64 /mingw64)

find_package(SFML 2.5 COMPONENTS graphics window system REQUIRED)

set (SOURCE_FILES src/main.cpp src/DVDBouncer.cpp)

add_executable(DVDBounce ${SOURCE_FILES})

target_link_libraries(DVDBounce PRIVATE sfml-graphics sfml-window sfml-system)

include(CTest)
enable_testing()
