# name for test binary
set(BINARY ${CMAKE_PROJECT_NAME}_test)

# collect all source files in SOURCES variable
file(GLOB_RECURSE TEST_SOURCES LIST_DIRECTORIES false *tests.cpp)
set(SOURCES ${TEST_SOURCES})

# tell CMake to compile our tests as an executable
add_executable(${BINARY} ${TEST_SOURCES} main.cpp)

# link our test runner executable to GoogleTest and our source library
target_link_libraries(${BINARY} PUBLIC ${CMAKE_PROJECT_NAME}_lib gtest)