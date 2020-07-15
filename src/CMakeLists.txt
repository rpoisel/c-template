add_subdirectory(libArith)
add_subdirectory(libArithPP)

add_executable(main main.c)
target_link_libraries(main arith)

add_custom_target(cppcheck ALL
  COMMAND cppcheck --enable=all --check-config -IlibArith -IlibArithPP ${CMAKE_CURRENT_LIST_DIR}
  WORKING_DIRECTORY ${CMAKE_CURRENT_LIST_DIR}
  COMMENT "Running cppcheck on the source tree"
  VERBATIM
)
