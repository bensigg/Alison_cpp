#include "squawker.h"
#include <iostream>

int main(void)
{
    {
        Squawker noname;
    }
    Squawker Bob("Bob");

    Squawker Bob2(Bob);

    {
        Squawker noname;
        noname = Bob;
    }

    return 0;
}