#include <iostream>
#include <cstdlib>

/*
    a variable with "n-bits" can store 2^n values
    the set of values that a variable with a data-type can store is called the range of that data-type (or variable)

    this range is based on two factors : 
                1. signed or unsigned integers
                2. size of integer data-type
    
    2. based on size of integer data-type
            as a general rule, an 8bit integer can store 2^8(=256) possible values and has a range of -128 to 127
                MATHEMATICALLY, the range of n-bits integer variable is : "-2^(n-1) to 2^(n-1) - 1"
                                as an example :
                                                for 8bit integer(which is basically char)
                                                    - 2^(8-1) = -128 and 2^(7-1) - 1 = 127
                                                        therefore range = -128 to 127
    for an 8bit integer, 7 bits are used for magnitude while 1 bit is used for the sign 
*/

/*
    Overflow:
        when we try to assign a variable a value that is not in the range of that data-type, undefined behaviour would be shown
        this undefined behaviour is called "overflow" as the value assigned to the variable is over-flowing out of the type range
*/

int main(){

    // undefined behaviour and an overflow warning
    // char ch = -130; // not in range
    // std::cout << "i am : " << ch << std::endl; 

    int max = 2'147'483'647;  // ' can be used to separate numbers(have some space), these are ignored by the compiler during compilation
    std::cout << max << std::endl; 
    max = max + max;
    std::cout  << "\n" << max << std::endl; // undefined behaviour (or overflow)

    return EXIT_SUCCESS;
}