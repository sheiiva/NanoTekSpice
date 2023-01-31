/* File: IComponent.hpp
**
** Interface for component definition.
**
** 2022, December 28
** Author: Corentin COUTRET-ROZET (corentin.rozet@epitech.eu)
**
** Copyright 2022, Corentin COUTRET-ROZET
*/

#ifndef ICOMPONENT_HPP
    #define ICOMPONENT_HPP

    #include <cstddef>

    namespace nts
    {
        enum class Tristate
        {
            Undefined = -1,
            False = 0,
            True = 1
        };

        class IComponent
        {
            public :
                virtual ~IComponent() = default ;

                virtual void            simulate(std::size_t tick) = 0;
                virtual Tristate        compute(std::size_t pin) = 0;
                virtual void            setLink(std::size_t pin, nts::IComponent & other, std::size_t otherPin) = 0;
                virtual void            dump() const = 0;
                virtual void            update(std::size_t tick) = 0;
        };
    }

#endif /* !ICOMPONENT_HPP */