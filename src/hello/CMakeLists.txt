# init_for_lib/src/hello/CMakeLists.txt

add_library(libhello STATIC hello.cpp)
target_include_directories(libhello PUBLIC ${PROJECT_SOURCE_DIR}/include)
target_compile_features(libhello PUBLIC ${CXX_FEATURES})
target_compile_options(libhello PRIVATE ${CXX_WARNINGS})
