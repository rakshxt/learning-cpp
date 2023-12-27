#include <iostream>
#include <cstdlib>

int add(int x, int y)
{
    return (x + y);
}

int multiply(int a, int b)
{
    return a * b;
}

int main()
{

    std::cout << add(add(add(9, 1), 10), multiply(0, 1)) << '\n';
    std::cout << multiply(add(2, 4), add(3, 3)) << std::endl;

    return EXIT_SUCCESS;
}