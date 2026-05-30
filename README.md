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
cmake -B build
cmake --build build
```

Options (both `ON` by default):

```bash
cmake -B build -DBUILD_EXAMPLES=OFF -DBUILD_TESTS=OFF
```

## Run examples

```bash
./build/bin/example_hello
```

## Run tests

Tests are simple executables, no testing framework required:

```bash
./build/bin/test_hello
```

Or via CTest:

```bash
ctest --test-dir build
```

---

## Usage (FetchContent)

```cmake
include(FetchContent)

FetchContent_Declare(
    init_for_lib
    GIT_REPOSITORY https://github.com/xqpigh/init_for_lib.git
    GIT_TAG        main
)

FetchContent_MakeAvailable(init_for_lib)

target_link_libraries(app PRIVATE hello_lib)
```

---

## License

MIT License. See [LICENSE](LICENSE).
