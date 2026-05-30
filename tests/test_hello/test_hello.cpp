// init_for_lib/tests/test_hello/test_hello.cpp

#include "init_for_lib/hello/hello.hpp"

#include <print>

using init_for_lib::hello::Hello;

int main() {
    Hello hello{};
    hello.test();
    std::println("Test 'texts/test_hello/test_hello.cpp' successfull.");
}
