#include <iostream>
#include <cstdlib>

// basic function to get input (radius)
double getRadius()
{

    int input{};
    std::cout << "enter the radius(in m) : ";
    std::cin >> input;

    return input;
}

// function to directly get square of radius to directly fit into thr formula pi*(r-square)
double getSquaredRadius()
{
    double r{getRadius()};
    return r * r;
}

int main()
{

    // method 1
    // double radius{getRadius()};
    // double area { 3.1415 * radius*radius };
    // std::cout << "area of the circle with radius " << radius << " = " << area << std::endl;

    // method 2
    double squaredRadius(getSquaredRadius());
    double area{3.1415 * squaredRadius};
    std::cout << "area of circle : " << area << "m²" << std::endl;

    return EXIT_SUCCESS;
}