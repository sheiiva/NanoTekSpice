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
    std::vector<std::string> Parser::parseWords(std::string const& line)
    {
        std::vector<std::string> words;
        std::stringstream sstream(line);

        while (sstream) {
            std::string word;
            sstream >> word;
            if (!word.empty())
                words.push_back(word);
        }

        return words;
    }

}