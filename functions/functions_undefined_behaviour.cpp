#include <iostream>
#include <cstdlib>

/*
    A function that returns some value is called a "value-returning-function" and is defined by providing its return type anything else than "void"

    if a value-returning-function doesnt returns any value, it will show undefined behaviour and most probably the compiler will show a warning message
    the only exception to this rule is for the function main which explicitly returns the value "0" even at the times when return statement is not provided
*/


// expectation :: no return statement in function returning "non-void"
int function(){
    
    std::cout << "i was supposed to return some int value, but fuck it, i aint gonna do nothing" << std::endl;

    // no return statement provided
}

int main(){
    int x{function()};

    std::cout << x << std::endl;
    // output : any random number ----- undefined behaviour shown by the value-returning-function that doesnt return any value

    return EXIT_SUCCESS;
}