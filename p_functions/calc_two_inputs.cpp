// (ngl) the following program "could" have done in a better manner but for now it is fine as fuck to work on this and to gain my lost skills

#include <iostream>
#include <cstdlib>

// function to take first user input and then return the first user input to the caller function(main in this case)
// then the input will be stored in another variable of the caller function
int getUserInput1()
{
    int input1{};

    std::cout << "enter first number : ";
    std::cin >> input1;

    return input1;
}

// function to take second user input and then return it to the caller function (as same as the function "getUserInput1")
// returns the input stored in the variable to the caller function which we will be storing again(the return value) in another variable of the caller fnc
int getUserInput2()
{
    int input2{};

    std::cout << "enter second number : ";
    std::cin >> input2;

    return input2;
}

int main()
{

    int num1{getUserInput1()}, num2{getUserInput2()}; // num1 stores the first user-input and num2 stores second user-input

    std::cout << num1 << " + " << num2 << " = " << (num1 + num2) << '\n';
    std::cout << num1 << " - " << num2 << " = " << (num1 - num2) << '\n';
    std::cout << num1 << " x " << num2 << " = " << (num1 * num2) << '\n';
    std::cout << num1 << " / " << num2 << " = " << (num1 / num2) << std::endl; // flushing at the end

    return EXIT_SUCCESS; // using EXIT_SUCCESS instead of 0
}