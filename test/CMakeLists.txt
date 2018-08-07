cmake_minimum_required(VERSION 3.0.0)
project(eval-gmock.spec)


add_executable(eval-gmock.spec
    foo.spec.cpp
)

message("CMAKE_BINARY_DIR: " ${CMAKE_BINARY_DIR})

# target_include_directories(eval-gmock.spec
# PRIVATE
#     ${CMAKE_BINARY_DIR}/googletest-src/googlemock/include/
# )

target_link_libraries(eval-gmock.spec
    gmock_main
    eval-gmock
)
add_test(NAME eval-gmock.spec COMMAND eval-gmock.spec)
