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

namespace nts
{
    File::File(std::string const& filename) noexcept :
        _name(filename)
    {
        std::cout << filename << std::endl;
    }

    void File::open(std::ios::openmode const& mode) noexcept
    {
        this->_fs.open(this->_name, mode);

        if (this->_fs.fail())
            std::cout << "Error: " << this->_name << ". File not found." << std::endl;
    }

    void File::close(void) noexcept
    {
        this->_fs.close();

        if (this->_fs.fail())
            std::cout << "Error: Can't close " << this->_name << std::endl;
    }

    std::string File::read(void) noexcept
    {
        this->_content = std::string((std::istreambuf_iterator<char>(this->_fs)),
                                    std::istreambuf_iterator<char>());

        return this->_content;
    }

    void File::showContent(void) noexcept
    {
        std::cout << this->_content << std::endl;
    }

}