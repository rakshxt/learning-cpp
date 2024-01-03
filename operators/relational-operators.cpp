#include <iostream>
#include <cstdint>
#include <cstdlib>

/*
    relational operators are those operators that are used to compare two operands or expressions
    types :
            x == y  :   returns true if value of x is equal to the value of y, false otherwise
            x <= y  :   returns true is value of x is less than or equal to y, false otherwise
            x >= y  :   returns true if value of x is greater than or equal to y, false otherwise
            x >  y  :   returns true if value of x is greater than value of y, false otherwise
            x <  y  :   returns true if value of x is smaller than value of y, false otherwise
            x != y  :   returns true if value of x is not equal to value of y, false otherwise
*/

int main(){
    std::int_fast16_t i{}, j{};
    std::cout << "enter two numbers : ";
    std::cin >> i >> j;

    if (i==j) std::cout << i << " == " << j << '\n';
    if (i>j)  std::cout << i << " > " << j << '\n';
    if (i<j)  std::cout << i << " < " << j << '\n';
    if (i!=j) std::cout << i << " != " << j << '\n';
    if (i>=j) std::cout << i << " >= " << j << '\n';
    if (i<=j) std::cout << i << " <= " << j << std::endl;
    
    return EXIT_SUCCESS;
}