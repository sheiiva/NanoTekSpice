/* File: file.cpp
**
** Defintion for file management.
**
** 2022, December 28
** Author: Corentin COUTRET-ROZET (corentin.rozet@epitech.eu)
**
** Copyright 2022, Corentin COUTRET-ROZET
*/

#include "File.hpp"

namespace tools
{
    File::File(std::string const& filename) noexcept :
        _name(filename)
    {
    }

    void File::open(std::ios::openmode const& mode)
    {
        this->_fs.open(this->_name, mode);

        if (this->_fs.fail())
            throw std::runtime_error("Error: " + this->_name + ". File not found.");
    }

    void File::close(void)
    {
        this->_fs.close();

        if (this->_fs.fail())
            throw std::runtime_error("Error: Can't close " + this->_name);
    }

    std::string File::read(void)
    {
        this->_content = std::string((std::istreambuf_iterator<char>(this->_fs)),
                                    std::istreambuf_iterator<char>());

        return this->_content;
    }

    bool File::readLine(std::string &line)
    {
        return std::getline(this->_fs, line).eof() == false;
    }

    void File::showContent(void) noexcept
    {
        std::cout << this->_content << std::endl;
    }

}