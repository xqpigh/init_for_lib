// init_for_lib/src/hello/hello.cpp

#include "init_for_lib/hello/hello.h"

#include <print>

namespace init_for_lib::hello {

void Hello::test() {
    std::println("This is Hello::test() for lib.");
}

}
