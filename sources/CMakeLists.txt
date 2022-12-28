### CMakeLists.txt: NanoTekSpice source CMake file
###
### 2022, December 28
### Author: Corentin COUTRET-ROZET (corentin.rozet@epitech.eu)
###
### Copyright 2022, Corentin COUTRET-ROZET

include_directories(
    ${CMAKE_CURRENT_DIR}
)

set(SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/example.cpp
)

add_executable(
    ${PROJECT_NAME}
    ${SOURCES}
)