# init_for_lib/examples/example_hello/CMakeLists.txt

add_executable(example_app_hello example_hello.cpp)
set_target_properties(example_app_hello PROPERTIES OUTPUT_NAME example_hello)
target_link_libraries(example_app_hello PRIVATE 
    libhello
)
target_compile_options(example_app_hello PRIVATE -Wall -Wextra -Wpedantic)
