/* File: AComponent.cpp
**
** Definition for AComponent.
**
** 2023, January 31
** Author: Corentin COUTRET-ROZET (corentin.rozet@epitech.eu)
**
** Copyright 2023, Corentin COUTRET-ROZET
*/

#include "AComponent.hpp"

namespace nts
{
    AComponent::Link::Link(IComponent& component, std::size_t pin) :
        _component(component),
        _pin(pin),
        _lock(false),
        _oldState(Tristate::Undefined)
    {
    }
}

namespace nts
{
    void  AComponent::simulate(std::size_t tick)
    {
        if (tick > _tick) {
            _tick = tick;
            update(tick);
        }
    }

    void AComponent::setLink(std::size_t pin, IComponent& other, std::size_t otherPin)
    {
        // Check if the link already exists
        for (const auto& link : _links[pin]) {
            if (&link._component == &other && link._pin == otherPin)
                return;
        }

        _links[pin].emplace_back(other, otherPin);
    }

    void AComponent::dump() const
    {
        std::cout << "tick: " << _tick << std::endl;
        std::cout << "input(s):" << std::endl;
        // PRINT INPUTS
        std::cout << "output(s):" << std::endl;
        // PRINT OUTPUTS
    }

    void  AComponent::update(std::size_t tick)
    {
        (void)tick;
    }
}