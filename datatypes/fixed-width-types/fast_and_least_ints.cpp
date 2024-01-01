/*
    Problems that are with "fixed-width integers" are :
            1. these "fixed-width integers" only work in the architectures where fundamental types of the same width are defined
            2. a particular int32_t sized integer may be processed slower than int64_t due to range in integer processing in architectures
    
    furthermore, C++ also defines :
            std::int_fast#_t and std::int_least#_t in the <cstdint> libray

    functionality : 
            the std::int_fast#_t assigns the fastest datatype(that the architecture processes fastly) with at least "#" bits of width
                # = 8, 16, 32, 64
            std::int_least#_t assigns the smallest integer type with width "#"

            these both are also present in unsigned form as :
                    std::uint_fast#_t
                    std::uint_least#_t
*/

#include <iostream>
#include <cstdlib>
#include <cstdint>
#include <iomanip>


// running on a x64 processor
int main(){

    std::cout << std::setw(32) << "fastest type with 8bit width : " << sizeof(std::int_fast8_t) * 8 << " bits\n";
    std::cout << std::setw(32) << "fastest type with 16bit width : " << sizeof(std::int_fast16_t) * 8 << " bits\n";
    std::cout << std::setw(32) << "fastest type with 32bit width : " << sizeof(std::int_fast32_t) * 8 << " bits\n";
    std::cout << std::setw(32) << "fastest type with 64bit width : " << sizeof(std::int_fast64_t) * 8 << " bits\n\n";

    std::cout << std::setw(32) << "least type with 8bit width : " << sizeof(std::int_least8_t) * 8 << " bits\n";
    std::cout << std::setw(32) << "least type with 16bit width : " << sizeof(std::int_least16_t) * 8 << " bits\n";
    std::cout << std::setw(32) << "least type with 32bit width : " << sizeof(std::int_least32_t) * 8 << " bits\n";
    std::cout << std::setw(32) << "least type with 64bit width : " << sizeof(std::int_least64_t) * 8 << " bits\n";

    /*  
        its clearly the point of common sense that using fast and least integers would be architecture dependent as some are x32 some are x64 and some are x86
        it should also be clear that in cases of using "small width values for fast processing", memory would be wasted
    */

    return EXIT_SUCCESS;
}