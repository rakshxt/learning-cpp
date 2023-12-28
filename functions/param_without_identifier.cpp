#include <iostream>
#include <cstdlib>

/*
    we can specify parameters in a function without identifiers
    like 
        void fn(int){
            ...
        }
    this scenario is used when we want to add parameters in our program but dont necessarily want to use it
    if we just define a parameter with an identifier and then dont use that parameter in the function body, we will get an error or a warning
    to prevent this problem we need not to give the parameter a name, just given it a type
*/

void fn(int){
    std::cout << "i dont use my parameters by any means" << std::endl;
}

int main(){

    fn(0);

    return EXIT_SUCCESS;
}