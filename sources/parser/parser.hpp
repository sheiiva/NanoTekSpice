/* File: parser.hpp
**
** [DESCRIPTION]
**
** 2022, December 28
** Author: Corentin COUTRET-ROZET (corentin.rozet@epitech.eu)
**
** Copyright 2022, Corentin COUTRET-ROZET
*/

#ifndef PARSER_HPP
    #define PARSER_HPP

    #include <string>
    #include <iostream>

    namespace nts
    {
        class Parser
        {
            public:
                Parser(std::string const&) noexcept;
                Parser(Parser const& b) noexcept = default;
                Parser(Parser&& b) noexcept = default;
                ~Parser() noexcept = default;

                Parser& operator=(Parser const& rhs) noexcept = default;
                Parser& operator=(Parser&& rhs) noexcept = default;

            private:
        };
    }

#endif /* !PARSER_HPP */