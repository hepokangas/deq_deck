
add_executable(DeqDeck main.cpp Card.cpp)

set_target_properties(DeqDeck PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)