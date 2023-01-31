/* File: Usage.hpp
**
** Header for Usage.
**
** 2023, January 10
** Author: Corentin COUTRET-ROZET (corentin.rozet@epitech.eu)
**
** Copyright 2023, Corentin COUTRET-ROZET
*/

#ifndef USAGE_HPP_
    #define USAGE_HPP_

    #include <iostream>
    #include <exception>

    #define USAGE_ "\
    USAGE\n\
        ./nanotekspice [FILE.nts]\n\
    \n\
    DESCRIPTION\n\
        FILE.nts\t\tgraph description of the circuit."

    namespace nts
    {
        class Usage : public std::exception {
            public:
                const char *what() const noexcept override {return USAGE_;}
        };
    }

#endif /* !USAGE_HPP_ */