### boost-config.cmake: Boost configuration file
###
### 2022, December 28
### Author: Corentin COUTRET-ROZET (corentin.rozet@epitech.eu)
###
### Copyright 2022, Corentin COUTRET-ROZET

set(BOOST_INCLUDE_LIBRARIES thread filesystem system)
set(BOOST_ENABLE_CMAKE ON)

include(FetchContent)
FetchContent_Declare(
    Boost
    GIT_REPOSITORY  https://github.com/boostorg/boost.git
    GIT_TAG         ${BOOST_VERSION}
)
FetchContent_MakeAvailable(Boost)