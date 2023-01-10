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
        BOOST_LOG_TRIVIAL(info) << "USAGE";
        BOOST_LOG_TRIVIAL(info) << "  ./nanotekspice [FILE.nts]";
        BOOST_LOG_TRIVIAL(info);
        BOOST_LOG_TRIVIAL(info) << "DESCRIPTION";
        BOOST_LOG_TRIVIAL(info) << "  FILE.nts\t\tgraph description of the circuit.";
    }
}