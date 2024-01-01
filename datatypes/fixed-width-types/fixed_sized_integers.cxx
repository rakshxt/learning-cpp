#include <iostream>
#include <cstdlib>
#include <iomanip>

/*
    as defined in the "de-facto", only "minimum size(s)" for integer types are defined and not fixed
    because:
        back in old days, C allowed the compiler implementers to set their preffered size for int types that works fastest in the target architecture
    
    now, if we assign an "int" type variable a value that takes 4 bytes(32 bits) assuming that int is of 4 bytes in our architecture
    our program will missbehave in other architecture where int is of 2 bytes (as we would be trying to insert a 32 bits value into 16 bits variable), which will cause an overflow

    to work on this, the C99 standard defined some "fixed-width integers" in "stdint.h"(meaning that every type of this integer will occupy same width in every architecture)
    C++ adopted this and added them in the cstdint library
*/

#include <cstdint>


int main(){

    std::int8_t i1{-12};    // this is a 1 byte integer and can only store values under 8 byte capacity
                            // also reffered as signed char in some archs
                            // treated as character
    
    std::cout << i1 << '\n';
    i1 = i1 - 1;            // overflow
    std::cout << i1 << "\n\n";

    std::int16_t i2{32'767};    // this variable will be fixed size of 2 bytes in every architecture
    std::cout << i2 << '\n';
    i2 = i2 + 1;            // > (2^16 - 1) --> overflow
    std::cout << i2 << "\n\n";

    std::cout << "proof of fixed sizes : \n";
    std::cout << std::setw(16) << "std::int8_t : " << sizeof(std::int8_t) << " bytes\n";
    std::cout << std::setw(16) << "std::int16_t : " << sizeof(std::int16_t) << " bytes\n";
    std::cout << std::setw(16) << "std::int32_t : " << sizeof(std::int32_t) << " bytes\n";
    std::cout << std::setw(16) << "std::int64_t : " << sizeof(std::int64_t) << " bytes\n\n";

    std::cout << std::setw(16) << "std::uint8_t : " << sizeof(std::uint8_t) << " bytes\n";
    std::cout << std::setw(16) << "std::uint16_t : " << sizeof(std::uint16_t) << " bytes\n";
    std::cout << std::setw(16) << "std::uint32_t : " << sizeof(std::uint32_t) << " bytes\n";
    std::cout << std::setw(16) << "std::uint64_t : " << sizeof(std::uint64_t) << " bytes" << std::endl;

    return EXIT_SUCCESS;
}