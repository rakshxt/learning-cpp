#include <iostream>
#include <cstdlib>

double getRadius()
{
    int input{};
    std::cout << "enter radius of the sphere(in m) : ";
    std::cin >> input;
    return input;
}

int main()
{

    double radius{getRadius()};
    double volume{
        (4 * 3.1415 * radius * radius * radius) / 3};
    std::cout << "volume of sphere wirh radius " << radius << "m"
              << " = " << volume << "m³" << std::endl;

    return EXIT_SUCCESS;
}