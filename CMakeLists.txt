cmake_minimum_required(VERSION 3.12)

project(c-template
    VERSION     0.0.1
    LANGUAGES   C CXX
    DESCRIPTION "C project template"
)

include(CTest)

add_subdirectory(src)
add_subdirectory(test)