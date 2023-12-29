#include <iostream>
#include <cstdlib>

/*
    fundamental unit of memory - 1 bit (can only store "0" or "1"), bit is an abbrevation for binary digit
    8 bits -> 1 "byte"

    memory address -> it is a way to organise "memory chunks"(bytes) in "memory"(RAM[RANDOM ACCESS MEMORY])

    data type 
        -> it is a way of telling the compiler "how to interpret" the data stored in the memory region of a particular variable
            with help of this, the compiler and the cpu "encodes" the value of the variable into desired bit representation

        -> it is the type of data a variable holds (childish definition of datatype)
*/

int main(){

    [[maybe_unused]] int x;
    /*
        mechanism : it tells the compiler that the value stored in the memory region of "x" should be treated as an integer value
                    this specification of data type further helps the cpu and the compiler to "properly encode" the value stored in "x" in bits
    */

   /*
        integer vs integral

        integer means basic integer values like used in mathematics, that stores a whole number, positive, negative and zero
        in c++, integer datatypes also refer to some other data types that stores integer value too
            examples: int, long, short, long long

        integral means "integer type", is used to refer those data types that are stored in the memory unit "like an integer"
            examples: char(integral character), bool(integral boolean), int(integral integer);
   */

    return EXIT_SUCCESS;
}