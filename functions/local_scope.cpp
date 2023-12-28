#include <iostream>
#include <cstdlib>

/*
    An identifier's scope determines the region upto which it can be seen and used by other part of the program
    basically, a local variable's scope starts with the definition/creation of the variable and ends at the termination of the function
    a function parameters scope starts from the function header in which it is defined and ends at the termination of the same function

    NOTE:       two function both with variable name "var" can exist
    REASON :    because these two variables would be two different variables and unknown to each other 
                so because of this, the compiler will always have a track on which variable is being called
    
    an identifier's scope is its compile time property so all the problems related to scope would result in compile error
*/

void fn(int){
    int x{12*12};                          // starting scope of variable x (scope of variable "x" starts here)
    
    std::cout << "fn (x) : " << x << '\n'; // the value of "x" used here is the one defined in function fn()

}   // scope of variable "x" defined in the function fn ends here

int main(){
    
    int x{12};                          // scope of variable "x" starts here
    
    fn(0);

    std::cout << "main (x) : " << x;    // the "x" known here is the one defined in function main
    // even after call to fn() the main function's variable "x" remains unaffected
    // because they both are totally different variable and both shares totally differnet variable scopes

    return EXIT_SUCCESS;
    
} // scope of variable "x" ends here