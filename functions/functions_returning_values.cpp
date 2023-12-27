#include <iostream>

/*
    Return value : a return value is a "literal value" that is returned by the called function to the caller function for further use

    in order to return some value from the function, we should first define the function's return type
    and then use a return statement to return some value
        returnType functionIdentifier(){
            ...
            return value;
        }

    whenever the function is called it will execute and termiante after the "return" statement is called
    after the return statement, the function terminates and the returning value is copied and provided to the caller function and hence it can now be used for any purpose
    this process is called "return-by-value"
*/

int getInput()
{

    int input{};
    std::cout << "enter a number : ";
    std::cin >> input;

    return input; // returns the user input to the caller function ("main()")
}

int main()
{

    int value{getInput()}; // variable that will store the returning value of getInput function
    std::cout << value << " x 2 = " << (value * 2) << std::endl;

    return 0;
}