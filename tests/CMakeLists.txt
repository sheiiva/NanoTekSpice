### CMakeLists.txt: Tests CMake
###
### 2022, December 21
### Author: Corentin COUTRET-ROZET (corentin.rozet@epitech.eu)
###
### Copyright 2022, Corentin COUTRET-ROZET

include(FetchContent)
FetchContent_Declare(
    googletest
    URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

# Add sources
add_executable(
    tests
    test.cpp
)

# Link libraries
target_link_libraries(
    tests
    GTest::gtest_main
)

# Link to GTest
include(GoogleTest)
gtest_discover_tests(tests)