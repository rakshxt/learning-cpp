#include <iostream>
#include <cstdlib>

/*
    we know can use value-returning function in any valid statement or expression
    a value-returning function with parameter(s) takes arguments from the caller and then work upon it(some sort of calculation and shit) and then "returns" a value
*/

int add(int x, int y)
{
    return (x + y);
}

int multiply(int a, int b)
{
    return (a * b);
}

int main()
{

    std::cout << add(add(add(9, 1), 10), multiply(0, 1)) << '\n';
    std::cout << multiply(add(2, 4), add(3, 3)) << std::endl;

    return EXIT_SUCCESS;
}