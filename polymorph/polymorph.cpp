#include "Shape.h"
#include "Triangle.h"
#include "NamedRectangle.h"
#include <iostream>
#include <string>

int compute_area(const Shape& a_shape)
{
    return a_shape.area();
}

int main(void)
{
    NamedRectangle bobrect {"Bob", 3, 4};
    Triangle tri {2, 2};

    std::cout << compute_area(bobrect) << " " << compute_area(tri) << std::endl;
}