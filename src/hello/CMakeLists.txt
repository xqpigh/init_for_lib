# src/hello/CMakeLists.txt

add_library(hello_lib STATIC hello.cpp)
target_include_directories(hello_lib PUBLIC ${CMAKE_SOURCE_DIR}/include)
target_compile_features(hello_lib PUBLIC ${CXX_FEATURES})
target_compile_options(hello_lib PRIVATE ${CXX_WARNINGS})
