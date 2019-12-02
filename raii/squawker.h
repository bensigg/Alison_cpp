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
private:
    std::string name;
};