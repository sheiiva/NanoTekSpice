/* File: ArgumentHandler.cpp
**
** Definition for ArgumentHandler.
**
** 2023, January 10
** Author: Corentin COUTRET-ROZET (corentin.rozet@epitech.eu)
**
** Copyright 2023, Corentin COUTRET-ROZET
*/

#include "ArgumentHandler.hpp"

namespace nts
{
    ArgumentsHandler::ArgumentsHandler(int ac, char **av)
    {
        this->run(ac, av);
    }

    void ArgumentsHandler::run(int ac, char **av)
    {
        if (ac != 2)
            throw std::invalid_argument("Invalid number of arguments.");
        else if ((ac == 2) && ((std::string(av[1]) == "-h") || (std::string(av[1]) == "--help")))
            throw Usage();
    }
}