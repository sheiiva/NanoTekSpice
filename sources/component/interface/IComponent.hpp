/* File: IComponent.hpp
**
** Interface for component definition.
**
** 2022, December 28
** Author: Corentin COUTRET-ROZET (corentin.rozet@epitech.eu)
**
** Copyright 2022, Corentin COUTRET-ROZET
*/

#include <cstddef>

namespace nts
{
    enum Tristate {
        UNDEFINED = (-true),
        TRUE = true,
        FALSE = false
    };

    class IComponent
    {
        public :
            virtual ~IComponent() = default ;

            virtual void            simulate(std::size_t tick) = 0;
            virtual nts::Tristate   compute(std::size_t pin) = 0;
            virtual void            setLink(std::size_t pin, nts::IComponent & other, std::size_t otherPin) = 0;
            virtual void            dump() const = 0;
    };
}