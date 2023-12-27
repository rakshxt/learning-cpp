#include <iostream>

int main()
{

    // userInput1, userInput2
    int uI1{}, uI2{}, result{0};

    // console commands
    std::cout << "enter the number : ";
    std::cin >> uI1;
    std::cout << uI1 << " x ? : ";
    std::cin >> uI2;

    result = uI1 * uI2; // expression for computation of multiplication
    std::cout << uI1 << " x " << uI2 << " = " << result
              << std::endl;

    return 0;
}