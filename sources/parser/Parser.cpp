/* File: Parser.cpp
**
** Defintion for parser management.
**
** 2022, December 29
** Author: Corentin COUTRET-ROZET (corentin.rozet@epitech.eu)
**
** Copyright 2022, Corentin COUTRET-ROZET
*/

#include "Parser.hpp"

namespace nts
{
    Parser::Parser(std::string const& filename) noexcept
    {
        File p = File(filename);

        p.open(std::ios::in);
        std::string fileContent = p.read();

        p.close();
    }
}