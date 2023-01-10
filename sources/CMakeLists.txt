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
    ${CMAKE_CURRENT_SOURCE_DIR}/main.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/parser/file/File.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/parser/Parser.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/component/chipset/input/Input.cpp
)

set(HEADERS
    ${CMAKE_CURRENT_SOURCE_DIR}/system/System.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/parser/file/File.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/parser/Parser.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/component/interface/IComponent.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/component/chipset/input/Input.hpp
)

add_executable(
    ${PROJECT_NAME}
    ${SOURCES}
    ${HEADERS}
)

target_include_directories(
    ${PROJECT_NAME}
    PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/parser/file
)
