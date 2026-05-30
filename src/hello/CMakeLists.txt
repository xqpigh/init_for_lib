# init_for_lib/src/hello/CMakeLists.txt

add_library(hello STATIC hello.cpp)
target_include_directories(hello PUBLIC ${PROJECT_SOURCE_DIR}/include)
target_compile_features(hello PUBLIC ${CXX_FEATURES})
target_compile_options(hello PRIVATE ${CXX_WARNINGS})
