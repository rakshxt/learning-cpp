#include <iostream>
#include <cstdlib>

/*
    unsigned integers are those that can only store +ve values and not negative values
    RANGE :
            0 to (2^n)- 1
                ex:
                    8 bit integer range is 0 to 2^8 - 1 = 256 - 1 = 255
                    therefore 8 bits integers range is 0 to 255

    overflow in unsigned integers:
            when unsigned integer variables are provided values out of their range "modulo wrap-up" or "saturation-overflow" or "wrap-overflow" happens
            mechanism :
                    if we try to assign an 8 bit unsigned variable a value of 290, it will divided by 1+maxvalue and the remainder would be assigned
                    ex :
                        in case of 290, 290 would be divided by 255+1(1+maxvalue) and the remainder would be stored in the variable now
    backward overflow :
            when an unsigned integer is assigned a -ve value, that -ve value is wrapped around to the upper ranges and stored in the variable
            ex:
                in case of 0-255 
                if we assign -1 to the variable, -1 would wrap around to the top value (255)
                "   "   "    -2 to the variable, -2 would wrap around to the next top value 254
        
*/

int main(){

    unsigned short ush{65535};
    std::cout << "ush : " << ush << '\n';
    ush = ush + 1; // 65535+1 / maxvalue+1 ---> remainder = 0
    std::cout << "ush : " << ush << '\n';
    ush = ush + 1; // 65536+1 / maxvalue+1 ---> remainder = 1
    std::cout << "ush : " << ush << "\n\n";

    unsigned short bkof{0};
    std::cout << "bkof : " << bkof << '\n';
    bkof = bkof - 1; // -1 --> 65535
    std::cout << "bkof : " << bkof << '\n';
    bkof = bkof - 1; // -2 --> 65534
    std::cout << "bkof : " << bkof << '\n';

    return EXIT_SUCCESS;
}