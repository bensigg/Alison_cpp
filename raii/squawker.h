#pragma once
#include <cstring>
#include <iostream>

class Squawker
{
public:
    Squawker() : name{""}
    {
        std::cout << "default constructor \"\"" << std::endl;
    }

    Squawker(std::string n) : name{n}
    {
        std::cout << "constructor \"" << name << "\"" << std::endl;
    }

    ~Squawker()
    {
        std::cout << "destructor \"" << name << "\"" << std::endl;
    }

    Squawker(const Squawker& other) : name{other.name}
    {
        std::cout << "copy constructor\"" << name << "\"" << std::endl;
    }

    const Squawker& operator=(const Squawker& other)
    {
        name = other.name;
        std::cout << "assignment operator\"" << name << "\"" << std::endl;
        return *this;
    }

private:
    std::string name;
};