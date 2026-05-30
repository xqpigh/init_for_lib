# init_for_lib/tests/test_hello/CMakeLists.txt

add_executable(test_app_hello test_hello.cpp)
set_target_properties(test_app_hello PROPERTIES OUTPUT_NAME test_hello)
target_link_libraries(test_app_hello PRIVATE 
    init_for_lib_hello
)
target_compile_options(test_app_hello PRIVATE -Wall -Wextra -Wpedantic)

add_test(
    NAME ctest_test_hello
    COMMAND $<TARGET_FILE:test_app_hello>
)
