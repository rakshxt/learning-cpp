// modified version of ./find_area.cpp

// #include </media/rakshxt/stuffs/C++/learning cpp/p_functions/find_area.cpp>

#include <iostream>
#include <cstdlib>

double getRadius()
{
    int input{};
    std::cout << "enter the radius : ";
    std::cin >> input;

    return input;
}

// keydifference : this time we are providing getSquaredRadius() one parameter so that it doesnt have to regularly call getRadius() in order to get radius
// we are manually providing radius to the getSquaredRadius function
double getSquaredRadius(double radius)
{
    return radius*radius;
}

int main()
{   
    // squared radius would be direcly assigned to the variable as we are calling getSquaredRadius
    double radiusSQ{getSquaredRadius(getRadius())};

    std::cout << "area of circle : " << (3.14 * radiusSQ) << "m²" << std::endl;

    return EXIT_SUCCESS;
}