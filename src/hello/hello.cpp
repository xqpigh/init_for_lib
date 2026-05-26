// hello.cpp

// project
#include "init_for_lib/hello/hello.h"

// standart library
#include <print>

namespace init_for_lib::hello {

void Hello::test() {
    std::println("This is Hello::test().");
}

}
