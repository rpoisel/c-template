enable_testing()

add_subdirectory(Unity)

add_executable(test1_app test1.c)
target_link_libraries(test1_app PRIVATE
  unity
  arith
)
add_test(NAME test1 COMMAND test1_app)