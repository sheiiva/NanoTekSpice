/* File: Pin.hpp
**
** Pin class definition.
**
** 2023, January 10
** Author: Corentin COUTRET-ROZET (corentin.rozet@epitech.eu)
**
** Copyright 2023, Corentin COUTRET-ROZET
*/

#ifndef PIN_HPP
    #define PIN_HPP

    namespace nts
    {
        enum Tristate {
            UNDEFINED = (-true),
            TRUE = true,
            FALSE = false
        };

        enum PinType {
            PIN_INPUT,
            PIN_OUTPUT,
            PIN_IO
        };

        class Pin
        {
            public:
                Pin() noexcept = default;
                Pin(Pin const& b) noexcept = default;
                Pin(Pin&& b) noexcept = default;
                ~Pin() noexcept = default;
        
                Pin& operator=(Pin const& rhs) noexcept = default;
                Pin& operator=(Pin&& rhs) noexcept = default;

            private:
                Tristate    _state;
                PinType     _type;
        };
    }

#endif /* !PIN_HPP */