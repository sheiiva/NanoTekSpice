/* File: example.cpp
**
** [DESCRIPTION]
**
** 2022, December 21
** Author: Corentin COUTRET-ROZET (corentin.rozet@epitech.eu)
**
** Copyright 2022, Corentin COUTRET-ROZET
*/

#include <iostream>

#include "example.hpp"

double add_numbers(const double f1, const double f2) { return f1 + f2; }

double subtract_numbers(const double f1, const double f2) { return f1 - f2; }

double multiply_numbers(const double f1, const double f2) { return f1 * f2; }

int main()
{
    std::cout << "Hello world!" << std::endl;
    return 0;
}