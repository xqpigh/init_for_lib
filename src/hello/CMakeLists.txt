# init_for_lib/src/hello/CMakeLists.txt

add_library(init_for_lib_hello STATIC hello.cpp)
target_include_directories(init_for_lib_hello PUBLIC ${PROJECT_SOURCE_DIR}/include)
target_compile_features(init_for_lib_hello PUBLIC ${CXX_FEATURES})
target_compile_options(init_for_lib_hello PRIVATE ${CXX_WARNINGS})
