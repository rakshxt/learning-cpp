#include <iostream>

/**
 * undefined behaviour                  - results of code whos working is not well defined by the language
 * implementation-defined behaviour     - results that are "compiler" specific (defined by the compiler), meaning that the result in one compiler may be different in different compiler
 * unspecified behaviour                - results that are "compiler" specific too but are not defined by the compiler
 */

/*
    an unitialized variable is that which is not assigned/initialized any value
    an unitialized variable produces undefined behaviour (not defined by the language)

    when we dont initialize/assign a variable some value and use that same variable to get its "stored value",
    we will always get the value that was previously stored in the memory location which the variable is now assigned to.
*/

int main()
{

    int x, y;                            // these variables would be left undefined for most of the times
    std::cout << x << ", " << y << '\n'; // we are using uninitialized variables and this will produce undefined behaviour

    // example of implementation-defined behaviour
    // the following statement may give 2 in the output
    std::cout << "size of int : " << sizeof(int) << '\n';

    return 0;
}