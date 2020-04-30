cmake_minimum_required(VERSION 3.14.5)
project(Fibonacci VERSION 0.1.0)
include(FetchContent)

# C++-14
set(CMAKE_CXX_STANDARD 14)

# Add dependency on googletest
# CMake will automatically download and compile it
FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG        release-1.10.0
)
FetchContent_MakeAvailable(googletest)

#this will make all the files in our src dir avalible to be #included in test/
include_directories(src)

# add test as a subdirectory
# this causes test/CMakeLists.txt to be processed
add_subdirectory(test)
# add src as a subdirectory
# this causes src/CMakeLists.txt to be processed
add_subdirectory(src)
