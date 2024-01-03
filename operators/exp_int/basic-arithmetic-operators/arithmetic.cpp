#include <iostream>
#include <cstdlib>
#include <cstdint>

/*  
    Arithmetic operators - 
                    *, /, %, +, -

    integer-type division:
            when two operands to the operator/ are both integers
    floating-point division:
            when either of the two operand is a floating-point type

    usual observation :: when any one of the operand to these arithmetic operator is a floating point, then the desired result would always be in double
    such a result can then be casted into integer using :
                                                    static_cast <int> (expression);
*/

int main(){

    std::cout << 2+4 << '\n';  // 6
    std::cout << 2.9+4 << '\n';  // 6.9 
    std::cout << 9-8 << '\n';  // 1
    std::cout << 9.2 - 8 << '\n'; // 1.2
    std::cout << static_cast<int>(9.2 - 8) << '\n'; // 1.2 would not be casted to 1, dropping(truncating) the fractional part
    std::cout << 2*3 << '\n';      // 6
    std::cout << 2*3.6 << '\n';    // 7.2
    std::cout << static_cast <int> (2*3.6) << '\n';    // 7.2
    std::cout << 7/2 << '\n';  // integer type division
    std::cout << 7/2.0 << '\n'; // floating-point division
    std::cout << static_cast <double> (7) / 2 << std::endl;     // floating-point division, as static_cast returns 7 as a double literal


    return EXIT_SUCCESS;
}