/* File: Usage.cpp
**
** Definition for Usage.
**
** 2023, January 10
** Author: Corentin COUTRET-ROZET (corentin.rozet@epitech.eu)
**
** Copyright 2023, Corentin COUTRET-ROZET
*/

#include "Usage.hpp"

namespace nts
{
    Usage::Usage() noexcept
    {
        std::cout << "USAGE" << std::endl;
        std::cout << "  ./nanotekspice [FILE.nts]" << std::endl;
        std::cout << std::endl;
        std::cout << "DESCRIPTION" << std::endl;
        std::cout << "  FILE.nts\t\tgraph description of the circuit." << std::endl;
    }
}