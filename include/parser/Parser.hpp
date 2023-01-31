/* File: Parser.hpp
**
** Header for parser management.
**
** 2022, December 29
** Author: Corentin COUTRET-ROZET (corentin.rozet@epitech.eu)
**
** Copyright 2022, Corentin COUTRET-ROZET
*/

#ifndef PARSER_HPP
    #define PARSER_HPP

    #include <string>
    #include <vector>
    #include <iostream>
    #include <sstream>
    #include <unordered_map>
    #include <functional>

    #include "File.hpp"

    namespace nts
    {
        class Parser
        {
            public:
                Parser() noexcept = default;
                Parser(std::string const&) noexcept;
                Parser(Parser const& b) noexcept = default;
                Parser(Parser&& b) noexcept = default;
                ~Parser() noexcept = default;

                Parser& operator=(Parser const& rhs) noexcept = default;
                Parser& operator=(Parser&& rhs) noexcept = default;

                std::vector<std::string> parseWords(std::string const& line);
        };
    }

#endif /* !PARSER_HPP */