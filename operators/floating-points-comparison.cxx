#include <iostream>
#include <cstdlib>
#include <iomanip>

/*
    the,
        >, <, >= and <= operators works pretty fine with floating point types/literals/variables "as long as these values are not close to each other"
        the operators "!=" and "=" are of huge risk to be used to compare floating point literals/variables

    NOTE :
            floating-point types with small precision(low precisions) can be used for comparing purpose
*/

int main(){

    double d1{100.0 - 99.99}, d2{10.0-9.99};
    if (d1==d2)  std::cout << d1 << " == " << d2 << '\n';
    if (d1 > d2) std::cout << d1 << " > " << d2 << '\n';    // posibly  
    if (d1 < d2) std::cout << d1 << " < " << d2 << '\n';
    /*this is because of the fact of rounding error, as rounding error always occurs in every floating point computation*/
    std::cout << std::setprecision(20) << d1 << ", " << d2 << '\n';


    // although, we do can compare floating point types with low precisions example:::
    double pi_{3.14};
    if (pi_==3.14) std::cout << pi_ << " == " << 3.14f << std::endl;

    return EXIT_SUCCESS;
}