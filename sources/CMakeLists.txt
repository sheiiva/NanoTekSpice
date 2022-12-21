### CMakeLists.txt: Sources CMake
###
### 2022, December 21
### Author: Corentin COUTRET-ROZET (corentin.rozet@epitech.eu)
###
### Copyright 2022, Corentin COUTRET-ROZET

add_executable(example)

target_sources(example
    PRIVATE
        example.cpp
    PUBLIC
        example.hpp
    )

target_include_directories(example
    PUBLIC
        ${CMAKE_CURRENT_LIST_DIR}
    )

# # Get code coverage
# # (Only valid with the GNU compiler and on Linux)
# if(CMAKE_CXX_COMPILER_ID MATCHES GNU AND CMAKE_HOST_SYSTEM_NAME STREQUAL "Linux")
#     find_program(GCOV_PATH gcov)
#     if(NOT GCOV_PATH)
#     message(FATAL_ERROR "Code coverage analysis requires gcov!")
#     endif()
#     target_compile_options(example
#         PUBLIC "--coverage"
#         )
#     target_link_options(example
#         INTERFACE "--coverage"
#         )
# endif()