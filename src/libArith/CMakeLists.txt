add_library(arith arith.c)
target_include_directories(arith PUBLIC ${CMAKE_CURRENT_LIST_DIR})
set_target_properties(arith PROPERTIES
        C_STANDARD          99
        C_STANDARD_REQUIRED ON
        C_EXTENSIONS        OFF
)