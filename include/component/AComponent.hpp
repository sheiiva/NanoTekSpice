/* File: AComponent.hpp
**
** Abastract class for component definition.
**
** 2022, December 28
** Author: Corentin COUTRET-ROZET (corentin.rozet@epitech.eu)
**
** Copyright 2022, Corentin COUTRET-ROZET
*/

#ifndef ACOMPONENT_HPP
    #define ACOMPONENT_HPP

    #include <unordered_map>

    #include "IComponent.hpp"
    #include "Pin.hpp"

    namespace nts
    {
        class Acomponent : IComponent
        {
            public:
                Acomponent() noexcept = default;
                Acomponent(Acomponent const& b) noexcept = default;
                Acomponent(Acomponent&& b) noexcept = default;
                ~Acomponent() noexcept = default;
        
                Acomponent& operator=(Acomponent const& rhs) noexcept = default;
                Acomponent& operator=(Acomponent&& rhs) noexcept = default;

            private:
                std::unordered_map<char const*, Pin> _pins;
        };
    }

#endif /* !ACOMPONENT_HPP */