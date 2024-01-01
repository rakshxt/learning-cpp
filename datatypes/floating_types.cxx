#include <cstdlib>
#include <iomanip>
#include <iostream>

/*
    floating point datatypes are those that allows us to store numbers with decimals(or numbers with fractions)
    there are three types of floating point datatypes :
                float, double and long double
    by default a decimal literal value is thought of as a double and providing a 'f' at the last of the literal will tell the compiler that this literal is float and not double

    by default, std::cout sets 6 precisions to be shown for floating point datatypes

    precision :
            the precision of a floating point datatype represents the number of signifigant digits that the type can represent
            in general,
                4 bytes float type have 6-9 precision digits
                meaning that they can store numbers upto 6-9 significant digits
                ex :
                    12.1567
    
    assigning a number with more significant digits will cause "rounding errors" and unexpected results

    rounding errors :
            these are the errors that occurs when we try to assign a floating type the value which have more significant digits that the precision of the data type
            these errors produce unexpected result from the datatype
*/

int main(){

    std::cout << 0.1f << '\n';                  // 0.1
    std::cout << std::setprecision(10);         // sets the precision to be shown upto 10 significant digits
    std::cout << 0.1000000000f << '\n';         // 10 significant digits and hence rounding error will occur and unexpected result will be shown

    double d{0.10000000000000000};
    std::cout << std::setprecision(16);
    std::cout << d << '\n';                     // double value with 16 significant digits, should print 0.10000...0 but the compiler trauncates 0's, nvm
    std::cout << std::setprecision(20);
    std::cout << d << '\n';

    double add{0.1 + 0.1 + 0.1 + 0.1 + 0.1};    // very less rounding error
    std::setprecision(20);
    std::cout << add << '\n';
    add = add + (0.1);  
    std::cout << add << '\n';                   // visible rounding error

    return EXIT_SUCCESS;
}