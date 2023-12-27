#include <iostream>
#include <cstdlib>

/*
    Functions that doesnt return any value are specified with the "void" return type in the function header and are specified as non-value returning functions
    such functions that do not return any value terminates their execution in the end of the function and doesnt need any return statement to be explicitly specified
    anyways we can still specify a return statement to a non-value returning function

    we cannot use void functions in the statements that require some value in order to execute
    for example :
            std::cout << voidFunction();
            this statement wont ever compile because std::cout will seek for the return value of the voidFunction but there would be no value returned
            so the std::cout wont know what to do and purposely throw an error to the console and the program wont compile
*/

void printName()
{
    // function to print name
    // no returning function needs to be used
    std::cout << "name : rakshxt" << std::endl;
}

void printAge()
{
    std::cout << "age : 17" << std::endl;

    // an additional return statement can still be used in order to immediately exit/terminate the function but doing such is reduntant if done in the last of the function
    return;
    std::cout << "this doesnt prints";
}

int main()
{

    printName();
    printAge();

    // std::cout << printName();

    return EXIT_SUCCESS;
}