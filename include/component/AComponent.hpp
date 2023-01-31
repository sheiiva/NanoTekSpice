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

    #include <iostream>
    #include <unordered_map>
    #include <list>

    #include "IComponent.hpp"

    namespace nts
    {
        class AComponent : public IComponent
        {
            private:
                class Link
                {
                    public:
                        Link() noexcept = delete;
                        Link(IComponent& component, std::size_t pin);
                        Link(Link const& b) noexcept = default;
                        Link(Link&& b) noexcept = default;
                        ~Link() noexcept = default;
                
                        Link& operator=(Link const& rhs) noexcept = default;
                        Link& operator=(Link&& rhs) noexcept = default;

                    public:
                        IComponent&    _component;
                        const std::size_t   _pin;
                        bool                _lock;
                        Tristate            _oldState;
                };

            public:
                AComponent() noexcept = default;
                AComponent(AComponent const& b) noexcept = default;
                AComponent(AComponent&& b) noexcept = default;
                ~AComponent() noexcept = 0;

                AComponent& operator=(AComponent const& rhs) noexcept = default;
                AComponent& operator=(AComponent&& rhs) noexcept = default;

                virtual void simulate(std::size_t tick) override;
                virtual void setLink(std::size_t pin, IComponent& other, std::size_t otherPin) override;
                virtual void dump() const override;
                virtual void update(std::size_t tick) override;

            private:
                std::unordered_map<std::size_t, std::list<AComponent::Link>>    _links;
                std::size_t                                                     _tick = 0;
        };
    }

#endif /* !ACOMPONENT_HPP */