#include "./headers/getResult.hpp"
#include <iostream>

void getResult(unsigned short option, int p, int q){
    signed long int result{};
    #if 0
        if option < 0: // never possible (but for signed case)
            std::cout << "nigga are you serious ?"
    #endif

    #if 1

    switch (option){
        case 1:
            result = p+q;
            break;
        case 2:
            result = p-q;
            break;
        case 3:
            result = p*q;
            break;
        case 4:
            result =p/q;
            break;
        default: break;
    }

    std::cout << "result = " << result << std::endl;

    #endif
}