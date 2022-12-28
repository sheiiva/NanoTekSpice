### CMakeLists.txt: CMake file for the sources tests
###
### 2022, December 28
### Author: Corentin COUTRET-ROZET (corentin.rozet@epitech.eu)
###
### Copyright 2022, Corentin COUTRET-ROZET

include(${CMAKE_SOURCE_DIR}/config/googletest-config.cmake)

enable_testing()

set(SOURCES
    test.cpp
)

add_executable(
    ${PROJECT_NAME}_tests
    ${SOURCES}
)

target_link_libraries(
    ${PROJECT_NAME}_tests
    GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(${PROJECT_NAME}_tests)