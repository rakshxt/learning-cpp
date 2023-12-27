#include <cstdlib> // for EXIT_SUCCESS and EXIT_FAILURE
#include <iostream>

/*
    C++ defines only 3 returning values for the main function
        0, EXIT_SUCCESS and EXIT_FAILURE

        0, EXIT_SUCCESS for "0"     (successful execution of the program)
        EXIT_FAILURE for "1"      (unsuccessful execution of the program)
*/

int main()
{
    std::cout << "exited with code=0";
    return EXIT_SUCCESS;
}