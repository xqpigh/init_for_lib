# tests/test_hello/CMakeLists.txt

add_executable(test_hello_app test_hello.cpp)
set_target_properties(test_hello_app PROPERTIES OUTPUT_NAME test_hello)
target_link_libraries(test_hello_app PRIVATE 
    hello_lib
)
target_compile_options(test_hello_app PRIVATE -Wall -Wextra -Wpedantic)

add_test(
    NAME test_hello_ctest
    COMMAND $<TARGET_FILE:test_hello_app>
)
