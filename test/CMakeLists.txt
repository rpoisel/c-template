enable_testing()

add_subdirectory(Unity)

add_subdirectory(Catch2)
add_library(TestMain STATIC test_main.cpp)
target_link_libraries(TestMain PUBLIC Catch2::Catch2)

### Sample Unity test
add_executable(test1_app test1.c)
target_link_libraries(test1_app PRIVATE
  unity
  arith
)
add_test(NAME test1 COMMAND test1_app)

### Sample Catch2 test
add_executable(test2_app test2.cpp)
target_link_libraries(test2_app PRIVATE
  TestMain
  ArithPP
)
add_test(NAME test2 COMMAND test2_app)