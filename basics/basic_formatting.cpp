#include <iostream>

/**
 * whitespaces in c++ is ignored by the compiler. this means that we are independent of using whatever formatting style to use
 * the only thing to keep in mind is that we should use no more than 80 characters in one statement
 *
 * preprocessor directives shouldnt be used in the same lines, they should be listed in separate lines
 *
 * keyword-keyword or identifier-identifier should be separated by white-space
 */

int main()
{

    // error producing code
    // std::cout << "Hello
    //                 world";

    std::cout << "this line is separated in two lines one is this "
                 "and another one is this.\n";

    // when separating two lines with operators, we should add the operator in the starting of the next line
    std::cout << 2 + 3 + 5 << std::endl;

    return 0;
}