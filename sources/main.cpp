/* File: main.cpp
**
** Entrypoint of NanoTekSpice project.
**
** 2022, December 28
** Author: Corentin COUTRET-ROZET (corentin.rozet@epitech.eu)
**
** Copyright 2022, Corentin COUTRET-ROZET
*/

#include "Usage.hpp"
#include "System.hpp"

int main(int ac, char **av)
{
    try {
        nts::System system(ac, av);

        system.run();
    } catch (const nts::Usage &e) {
        std::cout << e.what() << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Error: " << std::string(e.what()) << std::endl;
        return 84;
    }
    return 0;
}