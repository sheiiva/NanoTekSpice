### CMakeLists.txt: Root CMake
###
### 2022, December 21
### Author: Corentin COUTRET-ROZET (corentin.rozet@epitech.eu)
###
### Copyright 2022, Corentin COUTRET-ROZET

cmake_minimum_required(VERSION 3.21)

# Project information
project(
    NanoTekSpice
    VERSION 0.0.1
    DESCRIPTION "NanoTekSpice is a logic simulator that builds a graph (the nodes of which will be simulated digital electronic components, inputs or outputs) from a configuration file, and injects values into that graph to get results."
    HOMEPAGE_URL "https://github.com/sheiiva/NanoTekSpice"
    LANGUAGES CXX
)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Change this to false if you want to disable warnings_as_errors in developer mode
set(OPT_WARNINGS_AS_ERRORS_DEVELOPER_DEFAULT FALSE)

# Place binaries and libraries according to GNU standards
include(GNUInstallDirs)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/${CMAKE_INSTALL_LIBDIR})
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/${CMAKE_INSTALL_LIBDIR})
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/${CMAKE_INSTALL_BINDIR})

# Build
add_subdirectory(sources)

# Build Tests
enable_testing()
add_subdirectory(tests)