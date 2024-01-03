#include <iostream>
#include <cmath>
#include <cstdlib>

#include "./exp_int/upow.hxx" // user Defined header for powInt(std::int_fast64_t, std::int_fast64_t)
                                // implicit conversion from int--->std::int_fast64_t

/*
    eventually C++ does not define an exponentiation operator
    prefer using pow(double, double) function defined in cmath header
        as pow(double, double) takes and evaluate results in floating-point type, rounding errors can occur
        try defining own exponentiation function for integral exponentiation
*/

int main(){
    std::cout << "0.7 raised to 2 : " << std::pow(0.7, 2) << '\n';
    
    std::cout << "12 raised to 2 : " << powInt(12, 2) << std::endl;
    std::cout << "1e6 raised to 4 : " << powInt(1e6, 4) << std::endl;

    return EXIT_SUCCESS;
}