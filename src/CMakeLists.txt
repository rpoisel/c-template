add_subdirectory(libArith)

add_executable(main main.c)
target_link_libraries(main arith)