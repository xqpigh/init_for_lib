# init_for_lib

A modern C++ library template.

---

## Features

- Modern CMake structure
- Library + examples
- Lightweight manual tests (no external dependencies)
- Header-based public API
- FetchContent support

---

## Project structure


include/
src/
examples/
tests/


---

## Build

```bash
cmake -B build
cmake --build build
Run examples
./build/bin/example_hello
Run tests

Tests are simple executables (no testing framework required):

./build/bin/test_hello

Or:

ctest --test-dir build
Usage (FetchContent)
FetchContent_Declare(
    init_for_lib
    GIT_REPOSITORY https://github.com/yourname/init_for_lib.git
)

FetchContent_MakeAvailable(init_for_lib)

target_link_libraries(app PRIVATE init_for_lib)
License

MIT License
