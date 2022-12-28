### CMakeLists.txt: NanoTekSpice
###
### 2022, December 28
### Author: Corentin COUTRET-ROZET (corentin.rozet@epitech.eu)
###
### Copyright 2022, Corentin COUTRET-ROZET

cmake_minimum_required(VERSION 3.21)

# Project information
project(
    NanoTekSpice
    VERSION 0.0.1
    DESCRIPTION ""
    HOMEPAGE_URL "https://github.com/sheiiva/NanoTekSpice"
    LANGUAGES CXX
)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Place binaries and libraries according to GNU standards
include(GNUInstallDirs)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/${CMAKE_INSTALL_LIBDIR})
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/${CMAKE_INSTALL_LIBDIR})
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/${CMAKE_INSTALL_BINDIR})

# Change this to false if you want to disable warnings_as_errors in developer mode
set(OPT_WARNINGS_AS_ERRORS_DEVELOPER_DEFAULT FALSE)

# Set libraries versions
include(${CMAKE_SOURCE_DIR}/config/versions.cmake)

### BUILD ###
add_subdirectory(sources)

### BUILD TESTS ###
add_subdirectory(tests)