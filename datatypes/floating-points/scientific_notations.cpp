#include <iostream>
// #include <cstdint>
#include <cstdlib>
#include <iomanip>

// e stands for "times 10 to the power"
// example :    1.2e12 would be computed as 1.2 "*10^" 12
//                                                e

int main(){
    std::cout << std::setprecision(10); // for basic float and also round off errors can be seen easily
    std::cout << 1.3e-2; // 1.3 * 10^-2

    return EXIT_SUCCESS;
}