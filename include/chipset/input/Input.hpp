/* File: Input.hpp
**
** Header for input management.
**
** 2022, December 29
** Author: Corentin COUTRET-ROZET (corentin.rozet@epitech.eu)
**
** Copyright 2022, Corentin COUTRET-ROZET
*/

#ifndef INPUT_HPP
    #define INPUT_HPP

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

#endif /* !INPUT_HPP */