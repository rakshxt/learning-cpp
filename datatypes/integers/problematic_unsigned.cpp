#include <iostream>
#include <cstdlib>

// problem 1 : wrap-around problem
// problem 2 : in an expression (arithmetic or comparison) where one operand is signed and another is unsigned
//             in such cases, signed "integer"(not short) is converted into unsigned and hence producing unexpected results

int main(){

    signed int si{-3};
    unsigned int usi{1};

    std::cout << "unsigned(1) + signed(-3) = " << usi + si << '\n';  //4,294,967,293 +1

    return EXIT_SUCCESS;
}