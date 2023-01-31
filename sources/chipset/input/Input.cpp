/* File: Input.cpp
**
** Defintion for input management.
**
** 2022, December 29
** Author: Corentin COUTRET-ROZET (corentin.rozet@epitech.eu)
**
** Copyright 2022, Corentin COUTRET-ROZET
*/

#include "Input.hpp"

namespace nts
{
    Input::Input(std::string const& name) noexcept : _name(name) {}

    void Input::link(Input *other) noexcept
    {
        this->_link = other;
    }
}