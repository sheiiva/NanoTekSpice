/* File: file.hpp
**
** Header for file management.
**
** 2022, December 28
** Author: Corentin COUTRET-ROZET (corentin.rozet@epitech.eu)
**
** Copyright 2022, Corentin COUTRET-ROZET
*/

#ifndef FILE_HPP
    #define FILE_HPP

    #include <string>
    #include <iostream>
    #include <fstream>

    namespace nts
    {
        class File
        {
            public:
                File(std::string const&) noexcept;
                File(File const& b) noexcept = default;
                File(File&& b) noexcept = default;
                ~File() noexcept = default;

                File& operator=(File const& rhs) noexcept = default;
                File& operator=(File&& rhs) noexcept = default;

                void                open(std::ios::openmode const&) noexcept;
                void                close(void) noexcept;
                std::string         read(void) noexcept;
                bool                readLine(std::string &) noexcept;
                void                showContent(void) noexcept;

            private:
                std::string _name;
                std::string _content;
                std::fstream _fs;
        };
    }

#endif /* !FILE_HPP */