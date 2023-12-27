#include <iostream>

int main()
{

    // int m{}, n{}; // value initlialization doesnt work (as value initialization already gives the variable an initial value of 0)
    int m, n;
    std::cout << "garbage values : " << m << ", " << n << '\n';

    return 0;
}