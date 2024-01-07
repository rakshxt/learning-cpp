#include <iostream>
#include <cstdlib>
#include <cstdint>
#include <cmath>

/*
    Unconditional Jump : an unconditional jump is when we jump from one part of the code to another (all in the same function)
    this functionality is performed with the help of "goto" statements, where a call to "goto" jumps the execution path and the path where to jump is specified by "statement label"
    a statement label can be thought of as a "name for statements"

    syntax:
        label:  
            statements....
            statements....
            statements....
            statements....


        goto label;     // unconditional jump

    
    IMPORTANT :
        the scope of a statement label is something called "function scope"
        this means that the statement label would be visible to the whole function where it is defined even at the point before its definition

        many says that goto statements tends to create a sphagetti code which is not a good option, so we should'nt use it
        but sike who cares??? use it whenever efficient and possible and best results given.
*/

void run(){
    redo:
        double x{};
        std::cout << "enter a non negative number : ";
        std::cin >> x;

        if (x<0.0)
            goto redo;      // backward jump (unconditional)
        
        std::cout << "sqrt(" << x << ") = " << std::sqrt(x) << '\n';
}

int main(){
    run();
    return EXIT_SUCCESS;
}