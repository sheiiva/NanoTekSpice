/* File: Usage.hpp
**
** Header for Usage.
**
** 2023, January 10
** Author: Corentin COUTRET-ROZET (corentin.rozet@epitech.eu)
**
** Copyright 2023, Corentin COUTRET-ROZET
*/

#ifndef USAGE_HPP_
    #define USAGE_HPP_

    #include <iostream>
    #include <boost/log/trivial.hpp>

    namespace nts
    {
        class Usage
        {
            public:
                Usage() noexcept;
                Usage(Usage const& b) noexcept = default;
                Usage(Usage&& b) noexcept = default;
                ~Usage() noexcept = default;
        
                Usage& operator=(Usage const& rhs) noexcept = default;
                Usage& operator=(Usage&& rhs) noexcept = default;
        };
    }

#endif /* !USAGE_HPP_ */