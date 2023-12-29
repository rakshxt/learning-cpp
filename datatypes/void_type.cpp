#include <iostream>
#include <cstdlib>

/*
    void is an "imcomplete type"
    an incomplete type is a data type that is declared but not yet defined.
    in case of incomplete types, the compiler knows the presence of such types but "does not know how much memory to allocate for such types"

    in simple language, void means no type and hence is an intentionally incomplete type

    uses:
        1. for function return types
            void is used as a reuturn type in functions that returns no value(see void means no type)
        2. for representation of "no function parameter"
            ex:
                void printName(void);   
            this tells the compiler that the function printName don't have any parameter and hence takes no argument(s)
            this is btw depreceated in C++

*/


void showName(void){    // tells the compiler that this function returns and takes "NOTHING"
    std::cout << "rakshxt" << std::endl;
    // return 0; returning a value would throw a compile time error as we have specified this function dont return anything
    return;     // although a return statement with no value specified can be used to terminate the function immediately at the point of statement 
                // but this method is useless and redundant(if used in the last line of the function) 
}

int main(){
    showName();
    return EXIT_SUCCESS;
}