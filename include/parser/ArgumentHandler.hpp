/* File: ArgumentHandler.hpp
**
** Header for ArgumentHandler.
**
** 2023, January 10
** Author: Corentin COUTRET-ROZET (corentin.rozet@epitech.eu)
**
** Copyright 2023, Corentin COUTRET-ROZET
*/

#ifndef ARGUMENTHANDLER_HPP_
    #define ARGUMENTHANDLER_HPP_

    #include <string>
    #include <iostream>

    #include "Usage.hpp"

    namespace nts
    {
        class ArgumentsHandler
        {
            public:
                ArgumentsHandler() noexcept = delete;
                ArgumentsHandler(int ac, char **av);
                ArgumentsHandler(ArgumentsHandler const& b) noexcept = default;
                ArgumentsHandler(ArgumentsHandler&& b) noexcept = default;
                ~ArgumentsHandler() noexcept = default;
        
                ArgumentsHandler& operator=(ArgumentsHandler const& rhs) noexcept = default;
                ArgumentsHandler& operator=(ArgumentsHandler&& rhs) noexcept = default;

            private:
                void run(int ac, char **av);
        };
    }

#endif /* !ARGUMENTHANDLER_HPP_ */