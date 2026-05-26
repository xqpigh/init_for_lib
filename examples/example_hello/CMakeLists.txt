# examples/example_hello/CMakeLists.txt

add_executable(example_hello_app example_hello.cpp)
set_target_properties(example_hello_app PROPERTIES OUTPUT_NAME example_hello)
target_link_libraries(example_hello_app PRIVATE 
    hello_lib
)
target_compile_options(example_hello_app PRIVATE -Wall -Wextra -Wpedantic)
