# shortcut to get our project name in the ${BINARY} variable
set(BINARY ${CMAKE_PROJECT_NAME})

# collect all source files in SOURCES variable
set(SOURCES Fibonacci.h Fibonacci.cpp)

# tell CMake to compile our source files, and main.cpp
add_executable(${BINARY} ${SOURCES} main.cpp)

# tell CMake to compile our source files as a library
# Then Google Test can link to it
add_library(${BINARY}_lib STATIC ${SOURCES})
