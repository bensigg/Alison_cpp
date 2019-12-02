#include "Rectangle.h"
#include "NamedRectangle.h"
#include <iostream>
#include <string>

int main(void)
{
    Rectangle rect1 {3,4};
    std::cout << rect1.get_width() << " " << rect1.get_height() << std::endl;

    NamedRectangle nrect1 {"Bob", 2, 3};
    std::cout << nrect1.get_width() 
        << " * "
        << nrect1.get_height()
        << " = "
        << nrect1.area()
        << ", "
        << nrect1.get_name()
        << std::endl;        

    nrect1.resize(6, 8);
    Rectangle rect2 {nrect1};
    std::cout << rect2.get_width() << ", " << rect2.get_height() << std::endl;
}