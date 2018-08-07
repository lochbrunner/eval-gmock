cmake_minimum_required(VERSION 3.0.0)
project(eval-gmock)

# add_executable(eval-gmock
#     main.cpp
# )

add_library(eval-gmock
    foo.cpp
)



target_include_directories(eval-gmock
    PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}
)

# Now simply link against gtest or gtest_main as needed. Eg
# target_link_libraries(eval-gmock gmock_main)
# add_test(NAME example_test COMMAND example)