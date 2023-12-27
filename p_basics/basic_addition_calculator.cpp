#include <iostream>

int main()
{

    // input1 for first input, input2 for second and sum for summation
    int input1{}, input2{}, sum{0};

    std::cout << "Enter the first number : ";  // asks for the first number
    std::cin >> input1;                        // stores first input in "input1"
    std::cout << "Enter the second number : "; // asks for the second number
    std::cin >> input2;                        // stores second input in "input2"

    sum = (input1 + input2);                                        // expression statement -- adding the two inputs
    std::cout << input1 << " + " << input2 << " = " << sum << '\n'; // output to be shown in the console

    return 0;
}