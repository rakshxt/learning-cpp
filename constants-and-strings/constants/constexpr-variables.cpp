#include <iostream>
#include <cstdint>
#include <cstdlib>

#define cxpr constexpr

/*
    telling compiler about compile-time constant variables :
        we can help the compiler to know about a compile time constant variable with the help of "constexpr" keyword
        it tells the compiler that the variable is a compile-time constant variable and thus can be used in compile-time expressions
*/

int get(void);

int main(int argc, char const *argv[]){

    const int ci1{10};              // compile-time constant variable, but not preffered
    constexpr int cxpri1{10};       // valid, as 10 is a compile-time expression, hence "cspri1" is a compile time constant variable

    // by default, constexpr variables are implicitly const but const variables are not constexpr implicitly (except for the constant int variable with constant expression initializer)
    // ++cxpri1;    // -- error(implicitly const)

    // with the help of constexpr keyword we can define compile-time constant variable of non-integral types to
    constexpr double cxprd{12.12};
    cxpr      double csprd2{cxprd-2};   // valid, (constant expression)

    // by default functions are evaluated at runtime, so a returning value from a function cannot be used in constant(compile-time) expresions, as these values would not be known at compile time
    // cxpr int cxprfrv{get()};   // compile time error: expression(initialization expression) must have a constant value

    return EXIT_SUCCESS;
}

int get(){return 12;}
