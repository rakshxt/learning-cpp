#include <iostream>

/*
    A function is nothing but a reusable "sequence", "collection" or "group" of statements that is designed to perform a specific task
    ex: to print something, to add two number, to take user input and return it to caller function, etc

    Why do we use functions??
        We use functions to divide our program into "modular chunks" or "segments" in order to not to make the whole program look complex
    
    function call :
        A function call is an expression that terminates(or halts/stops) the execution of the current function statements and starts executing of the function that is called
    We always "call" a function from one function(probably "main()") in order to execute that function
    The function calling another function is called the "caller" and the function getting called is called "calle" or "called function"

    basic definition style :
            returnType functionIdentifier(){    // header of the function

                ...                             // statements to be executed (defines the job of the function)
            
            }                                   // closing of the function

    the first part of the function is the header that tells the compiler that we have defined a function specified with the name "functionIdenfier"
    here for now, we will take returnType as "int" for main and "void" for others (void means that the function returns "nothing")
    the "{ }" tells the opening and closing of the function and holds all the statements that are the part of the function
*/


// defining a function to print my name (rakshxt)
void greetMe(){
    std::cout << "executing greetMe()\n";
    std::cout << "\nGood morning " << "rakshxt!\n\n";
    std::cout << "terminating greetMe()" << std::endl;
}


int main(){

    std::cout << "executing main()\n";
    std::cout << "halting main()\n";
    greetMe();                          // function call - a function is called by specifying its identifier followed by a pair of parantheses "()"
    std::cout << "back in main()\n";
    std::cout << "terminating main()" << std::endl;

    return 0;
}


// NOTE : C++ does not allows the "main" function to be called explicitly, only the operating system makes a function call to the "main" function
// as usual main function also returns an integer value(purposely called a "status code")