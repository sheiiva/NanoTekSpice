/* File: System.cpp
**
** Definition for System management.
**
** 2022, December 29
** Author: Corentin COUTRET-ROZET (corentin.rozet@epitech.eu)
**
** Copyright 2022, Corentin COUTRET-ROZET
*/

#include "ArgumentHandler.hpp"
#include "Parser.hpp"
#include "System.hpp"

namespace nts
{
    System::System(int ac, char **av) noexcept : _running(true)
    {
        // Argument checking
        // int ret = ArgumentsHandler::check(ac, av);

        // if (ret)
        //     std::abort();

        // Argument parsing
        // _parser.fromFile(av[1]);

        // Setup components
    }

    void System::run()
    {
        std::string input;
        // Commands defintion
        const std::unordered_map<std::string, std::function<void(const std::vector<std::string>&)>> commands = {
            { "display", std::bind(&nts::System::display, this, std::placeholders::_1) },
            { "simulate", std::bind(&nts::System::simulate, this, std::placeholders::_1) },
            { "loop", std::bind(&nts::System::loop, this, std::placeholders::_1) },
            { "exit", std::bind(&nts::System::exit, this, std::placeholders::_1) }
        };

        while (this->_running) {
            std::cout << "> ";
            std::getline(std::cin, input);
            std::vector<std::string> args = _parser.parseWords(input);

            if (args.empty())
                continue;

            try {
                const auto& command = commands.find(args[0]);
                if (command != commands.end())
                    command->second(args);
                else
                    set(args);
            } catch (const std::exception& e) {
                std::cerr << std::string(e.what()) << std::endl;
            }
        }
    }

    void System::display(const std::vector<std::string>& arguments)
    {
        (void)arguments;
        std::cout << "Display" << std::endl;
    }

    void System::simulate(const std::vector<std::string>& arguments)
    {
        (void)arguments;
        std::cout << "Simulate" << std::endl;
    }

    void System::set(const std::vector<std::string>& arguments)
    {
        (void)arguments;
        std::cout << "Set" << std::endl;
    }

    void System::exit(const std::vector<std::string>& arguments)
    {
        if (arguments.size() != 1)
            throw std::runtime_error("CLI: invalid '" + arguments[0] + "' command.");
        this->_running = false;
    }

    void System::loop(const std::vector<std::string>& arguments)
    {
        (void)arguments;
        std::cout << "Loop" << std::endl;
    }
}