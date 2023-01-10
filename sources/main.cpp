/* File: main.cpp
**
** Entrypoint of NanoTekSpice project.
**
** 2022, December 28
** Author: Corentin COUTRET-ROZET (corentin.rozet@epitech.eu)
**
** Copyright 2022, Corentin COUTRET-ROZET
*/

#include "System.hpp"

int main(int ac, char **av)
{
    nts::System system(ac, av);

    return system.run();
}