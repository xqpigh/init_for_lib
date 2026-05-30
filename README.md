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

## Requirements

- CMake >= 3.26
- A C++26-capable compiler with `<print>` support (e.g. GCC 14+)

---

## Project structure

```
include/    public headers
src/        library sources
examples/   usage examples
tests/      manual test executables
```

---

## Build

```bash
cmake -S . -B build -G Ninja && cmake --build build
```

## Examples

Examples are disabled by default.

Build:

```bash
cmake -S . -B build -DBUILD_EXAMPLES=ON
cmake --build build
```

Run:

```bash
./build/bin/example_hello
```

## Tests

Tests are disabled by default.

Build:

```bash
cmake -S . -B build -DBUILD_TESTS=ON
cmake --build build
```

Run:

```bash
./build/bin/test_hello
```

Or via CTest:

```bash
ctest --test-dir build
```

## Usage (FetchContent)

```cmake
# fetch content
include(FetchContent)

FetchContent_Declare(
    init_for_lib
    GIT_REPOSITORY https://github.com/xqpigh/init_for_lib.git
    GIT_TAG origin/main
)

FetchContent_MakeAvailable(init_for_lib)

# ---- subdirectory ----
add_subdirectory(src)

# src/hello/CMakeLists.txt
target_link_libraries(github_test4_hello PRIVATE init_for_lib_hello)

```

---

## License

This project is licensed under the MIT License.

See the LICENSE file for details.

