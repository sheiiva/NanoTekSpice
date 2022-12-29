/* File: parser.cpp
**
** [DESCRIPTION]
**
** 2022, December 28
** Author: Corentin COUTRET-ROZET (corentin.rozet@epitech.eu)
**
** Copyright 2022, Corentin COUTRET-ROZET
*/

#include "parser.hpp"

namespace nts
{
    Parser::Parser(std::string const& filename) noexcept
    {
        std::cout << filename << std::endl;
    }

    Parser::Parser(Parser const& b) noexcept {}

    Parser::Parser(Parser&& b) noexcept {}

    Parser::~Parser() noexcept {}

    Parser& Parser::operator=(Parser const& rhs) noexcept {}

    Parser& Parser::operator=(Parser&& rhs) noexcept {}
}