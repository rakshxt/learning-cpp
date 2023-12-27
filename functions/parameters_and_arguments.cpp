#include <iostream>
#include <cstdlib>

/*
    Function parameters are the variables that are declared in the function header whose value is given by the caller function while calling the function
    such "things" is used to give the called function value(s) to operate/work upon.
        for instance :
            a function which adds 2 numbers should be given the two numbers to "add" them else the function would not recognise what to add

    function parameters are defined by adding variables inside the function parentheses and separated by commas if more than once

    function parameters acts same like the variables defined inside a function and can use used in any expression or statement
    the only difference is that function parameters are initialized with a value by the caller function

    the value(s) provided by the caller function to the function with parameters is called the argument(s)


    WORKING MECHANISM :
                when the function is called, all the function parameters are given memory units
                these memory units are then copy initialized(=) the value of the corresponding argument given to the function
*/

int getUserInput()
{
    int input{};
    std::cout << "enter a number : ";
    std::cin >> input;

    return input;
}

void printDoubledUserInput(int input)
{
    std::cout << input << "doubled is : " << input * 2 << std::endl;
}

int main()
{

    // easy method:
    // int num{getUserInput()};
    // printDoubledUserInput(num);

    // should be getting familiar with this programming style
    printDoubledUserInput(getUserInput());
    /*
        here, when the printDoubledUserInput statement is executed, the compiler will initialize the parameter input with the return value of getUserInput
        and when the getUserInput would be addressed the main function will be paused and the getUserInput will be executed and after the termination of getUserInput
        the printDoubledUserInput's parameter would be assigned the return value of getUserInput.
    */

    return EXIT_SUCCESS;
}