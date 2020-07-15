add_library(ArithPP STATIC
  arithpp.cpp
)

target_include_directories(ArithPP PUBLIC
  ${CMAKE_CURRENT_LIST_DIR}
)