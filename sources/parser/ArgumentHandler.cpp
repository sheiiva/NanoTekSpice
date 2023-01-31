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
    int ArgumentsHandler::run(int ac, char **av) noexcept
    {
        if (ac != 2) {
            std::cerr << "Error: Wrong number of arguments." << std::endl;
            return (84);
        } else if ((ac == 2) && ((std::string(av[1]) == "-h") || (std::string(av[1]) == "--help"))) {
            Usage();
            return (1);
        }
        return (0);
    }
}