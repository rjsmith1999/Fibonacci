# shortcut to get our project name in the ${BINARY} variable
set(BINARY ${CMAKE_PROJECT_NAME})

# set all the .h and .cpp files in cwd to be sources to compile
file(GLOB_RECURSE SOURCES LIST_DIRECTORIES true *.h *.cpp)
set(SOURCES ${SOURCES})

# tell CMake to compile our source files
add_executable(${BINARY}_run ${SOURCES})
# tell CMake to compile our source files as a library so google test can link to it
add_library(${BINARY}_lib STATIC ${SOURCES})
