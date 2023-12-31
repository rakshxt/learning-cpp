#include "./headers/square.hpp"
#include "./headers/domath.hpp"

#include <cmath>
#include <cstdlib>
#include <iostream>


int main(){
    // no actual usage of any function, just definitions n demonstration
    std::cout << "nnn" << std::endl;
    return EXIT_SUCCESS;
}

// after preprocessing 
/*

#ifndef SQUARE_HPP
#define SQUARE_HPP
    unsigned long int getSquare(signed long p){
        return unsigned(p*p);
    }
#endif

#ifndef DO_MATH_MANUAL
    #define DO_MATH_MANUAL
    
    // content of cmath
    
    #ifndef SQUARE_HPP
    #define SQUARE_HPP
        unsigned long int getSquare(signed long p){
            return unsigned(p*p);
        }
    #endif

    int add(int x, int y){return x+y;}
    int sub(int x, int y){return x-y;}
    int mul(int x, int y){return x*y;}
    int divide(int x, int y){return x*y;}
#endif


// content of iostream, cstdlib and cmath

int main(){
    // no actual usage of any function, just definitions n demonstration
    std::cout << "nnn" << std::endl;
    return EXIT_SUCCESS;
}

*/