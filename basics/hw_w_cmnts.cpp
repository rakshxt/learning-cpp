#include <iostream>
/*
    this is a preprocessor directive that is telling the compiler that we are going to use the standard "iostream" library
    iostream library is defined in ANSIC++ or the standard C++ that will help us to do console-based things (like producing outputs and taking inputs)

    whenever the program is compiled, the compiler will create an object file of our program and the linker will then come and add the object file of the libraries that we use in our program
    in this case, when the object file is created of this program, the linker will link the object file of "iostream" library and then produce an executable by meriging these object files together
*/

/**
 * now we are going to define the main() function of the program and note that main function is the foremost important function of any .cpp file
 * always the execution starts from the main function and ends at the last line of the main function
 * {} these denotes the statements that are inside of the main function
 */

int main(){                                   // start of the function "main", every statement to be executed when main is called is written inside the {}
    std::cout << "Hello, World!\n"; // this statement is responsible for producing output in the sytstem console/terminal or ide/editor terminal

    // we needa tell the os that whether or not program went well, so we are returning "0" (means everything went fine) to the os
    return 0; // returns value "0" to the os, indicating everything went well

} // end of the main function
