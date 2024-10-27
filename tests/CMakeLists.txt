# tests/CMakeLists.txt
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

enable_testing()

# Test collection
add_executable(DeqDeckTests DeqTest.cpp)

set_target_properties(DeqDeckTests PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

target_link_libraries(DeqDeckTests gtest gtest_main pthread)

add_test(NAME DeqDeckTests COMMAND DeqDeckTests)