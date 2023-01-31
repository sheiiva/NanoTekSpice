/* File: Output.hpp
**
** Header for output management.
**
** 2022, December 29
** Author: Corentin COUTRET-ROZET (corentin.rozet@epitech.eu)
**
** Copyright 2022, Corentin COUTRET-ROZET
*/

#ifndef OUPUT_HPP
    #define OUPUT_HPP

    #include <string>

    #include "IComponent.hpp"

    namespace nts
    {
        class Input : public IComponent
        {
            public:
                Input(std::string const& name) noexcept;
                Input(Input const& b) noexcept = default;
                Input(Input&& b) noexcept = default;
                ~Input() noexcept = default;

                Input& operator=(Input const& rhs) noexcept = default;
                Input& operator=(Input&& rhs) noexcept = default;
        };
    }

#endif /* !OUPUT_HPP */