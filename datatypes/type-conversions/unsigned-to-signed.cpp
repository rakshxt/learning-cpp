#include <iostream>
#include <cstdlib>
#include <cstdint>

int main(){

    // signed to unsigned---->
    // by default, all integers are assigned as signed
    std::cout << static_cast <unsigned int> (-1) << std::endl;       // wrap around taking 4-bit  width in consideration
    std::cout << static_cast <std::uint_fast16_t> (-1) << std::endl; // wrap around taking 64-bit width in consideration


    // unsigned to signed---->
    // if alloted a value more than the MAX value of signed int, undefined behaviour will result.
    std::cout << static_cast <signed int> (4294967295) << std::endl;
    std::cout << static_cast <std::int_fast16_t> (18446744073709551615) << std::endl;

    return EXIT_SUCCESS;
}