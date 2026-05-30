// init_for_lib/examples/example_hello/hello_example.cpp

#include "init_for_lib/hello/hello.h"

#include <print>

using init_for_lib::hello::Hello;

int main() {
    Hello hello{};
    hello.test();
    std::println("Test 'examples/example_hello/example_hello.cpp' successfull.");
}
