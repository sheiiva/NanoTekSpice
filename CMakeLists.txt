cmake_minimum_required(VERSION 3.21)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_EXTENSIONS OFF)

# Note: by default ENABLE_DEVELOPER_MODE is True
set(ENABLE_DEVELOPER_MODE
    TRUE
    CACHE BOOL "Enable 'developer mode'")

# Change this to false if you want to disable warnings_as_errors in developer mode
set(OPT_WARNINGS_AS_ERRORS_DEVELOPER_DEFAULT TRUE)

# Set the project name and language
project(
    NanoTekSpice
    VERSION 0.0.1
    DESCRIPTION "NanoTekSpice is a logic simulator that builds a graph (the nodes of which will be simulated digital electronic components, inputs or outputs) from a configuration file, and injects values into that graph to get results."
    HOMEPAGE_URL "https://github.com/sheiiva/NanoTekSpice"
    LANGUAGES CXX C)

# Download conan.cmake if it does not already exist
if(NOT EXISTS "${CMAKE_CURRENT_BINARY_DIR}/conan.cmake")
    message(STATUS "Downloading conan.cmake from https://github.com/conan-io/cmake-conan")
    file( DOWNLOAD
    "https://raw.githubusercontent.com/conan-io/cmake-conan/0.17.0/conan.cmake"
        "${CMAKE_CURRENT_BINARY_DIR}/conan.cmake"
        EXPECTED_HASH
        SHA256=3bef79da16c2e031dc429e1dac87a08b9226418b300ce004cc125a82687baeef
        STATUS download_status
        )

    if(NOT download_status MATCHES "^0;")
        message(FATAL_ERROR "Downloading conan.cmake failed with ${download_status}")
    endif()
endif()

# Include the downloaded conan module to use its functionality
include(${CMAKE_CURRENT_BINARY_DIR}/conan.cmake)
# Retrieve the current CMake settings and store them in CONAN_SETTINGS
conan_cmake_autodetect(CONAN_SETTINGS)
# Run conan to set up the dependencies
conan_cmake_run(CONANFILE ${CMAKE_CURRENT_LIST_DIR}/conanfile.txt 
                BASIC_SETUP
                BUILD missing
                SETTINGS ${CONAN_SETTINGS})

# Append the current binary dir to CMAKE_PREFIX_PATH so the conan package are found
list(APPEND CMAKE_PREFIX_PATH ${CMAKE_CURRENT_BINARY_DIR})

# use the just downloaded package 
find_package(fmt 6.1 REQUIRED)

# Create a target to build an executable
add_executable(NanoTekSpice)
# set the c++ version required

target_compile_features(
    NanoTekSpice
    PRIVATE cxx_std_20
)
# Add source files to 'hello_world' target
target_sources(
    NanoTekSpice
    PRIVATE sources/main.cpp
)

# link the fmt library to the executable
target_link_libraries(
    NanoTekSpice
    PRIVATE fmt::fmt
)