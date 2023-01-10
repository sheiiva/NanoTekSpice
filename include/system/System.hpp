/* File: System.hpp
**
** Header for System management.
**
** 2022, December 29
** Author: Corentin COUTRET-ROZET (corentin.rozet@epitech.eu)
**
** Copyright 2022, Corentin COUTRET-ROZET
*/

#ifndef SYSTEM_HPP_
    #define SYSTEM_HPP_

    #include "Parser.hpp"

    namespace nts
    {
        class System
        {
            public:
                System(int ac, char **av) noexcept;
                System(System const& b) noexcept = default;
                System(System&& b) noexcept = default;
                ~System() noexcept = default;
        
                System& operator=(System const& rhs) noexcept = default;
                System& operator=(System&& rhs) noexcept = default;

                int run() noexcept;

            private:
                bool _running;
                Parser _parser;
        };
    }

#endif /* !SYSTEM_HPP_ */