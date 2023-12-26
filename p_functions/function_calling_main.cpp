// balls required
// expectations:: undefined behaviour or error

#include <iostream>
#include <cstdlib>

void call(){
    std::cout << main() << std::endl;   
    /*
         error : main was not declared in this scope
         understanding ::
            the compiler is getting confused. it is thinking that we are calling some other function named as main, while we are calling the main "main" function
    */
}

int main(){
    call();
    return EXIT_SUCCESS;
}

// got:: error with an undefined behaviour