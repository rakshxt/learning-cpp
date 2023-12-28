#include <iostream>
#include <cstdlib>

/*
    The compiler compiles the .cpp file content "sequentially", means that there need to be definition or existence of the utility that will be used

    A forward declaration is a statement that tells the compiler presence of an identifier that is not defined yet(or defined in other part of the program or in other sequence)

    many a times, we will need to forward declare functions in order to tell the compiler the presence of the function
    whether or not they are called before or after the caller function code

    forward declaration for functions can be done with the help of function declaration or function prototype
    syntax :
            returnType identifier(type param1, type param2, ...);
                                or
            returnType identifier(type, type, ...);
    note that the function declaration/function prototype are ended by a semicolon

    one important case scenario:
            suppose that there are two functions A and B and both are calling each other
            1. A then B
                if code for a is written first and then for b, the compiler will complain for the code of b
                hence the compiler will basically be unable to understand what "B" is and will throw an error "identifier not found"
            2. B then A
                same would happend with same error. 
                in this case the compiler wont be able to recognise what "A" is and will throw an error
        
        to cope up with such problems, if we declare functions with function prototype or function declaration, this problem will be vanished
*/

int add(int, int);
int subtract(int, int);

int main(){
    std::cout << add(5, 5) << '\n';
    std::cout << subtract(20, 10) << std::endl;
    /*
        even though the functions add() and subtract are defined after the function main, compiler is still able to compile the source code sequentially
        reason: is because we have told the compiler about the existence of function add and subtract before the time they are defined

        so whenever function add or subtract are called, the compiler will know that we are making a function call and hence it will seek for that particular function to execute
    */
    return EXIT_SUCCESS;
}

int add(int a, int b){
    subtract(0, 0); // even though subtract is defined after add() function which is calling subtract function, the compiler will automatically understand that we are making a function call

    return a+b;
}

int subtract(int a, int b){
    return a-b;
}