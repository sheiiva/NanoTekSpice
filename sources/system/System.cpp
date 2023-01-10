/* File: System.cpp
**
** Defintion for System management.
**
** 2022, December 29
** Author: Corentin COUTRET-ROZET (corentin.rozet@epitech.eu)
**
** Copyright 2022, Corentin COUTRET-ROZET
*/

#include "System.hpp"

namespace nts
{
    System::System(int ac, char **av) noexcept : _running(true)
    {
        // Argument checking
        // Argument parsing
        // Setup components
    }

    int System::run() noexcept
    {
        while (this->_running) {
            std::string input;
            std::cout << "> ";
            std::getline(std::cin, input);

            std::cout << input << std::endl;
            // if (input == "exit")
            //     break;
            // else if (input == "simulate")
            //     this->Simulate();
            // else if (input == "display")
            //     this->Display();
            // else if (input == "loop")
            //     this->Loop();
            // else if (input == "dump")
            //     this->Dump();
            // else if (input == "input")
            //     this->Input();
            // else
            //     std::cout << "Unknown command" << std::endl;
        }
        return 0;
    }
}