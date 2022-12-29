/* File: main.cpp
**
** Entrypoint of NanoTekSpice project.
**
** 2022, December 28
** Author: Corentin COUTRET-ROZET (corentin.rozet@epitech.eu)
**
** Copyright 2022, Corentin COUTRET-ROZET
*/

#include "File.hpp"

int main(int ac, char **av)
{
    nts::File p = nts::File(av[1]);

    p.open(std::ios::in);
    std::cout << p.read() << std::endl;

    return 0;
}