#include <iostream>
#include <cstdlib>

#define TOKEN 1     // symbolic constant using object like macros 

/*
    TERMINOLOGIES :
            1. EXECUTION PATH - it is the sequence of statements that are executed "sequentially" by the CPU
            2. CONTROL FLOW STATEMENTS - are the statements that helps us to "branch"(switch) the execution path of the program
                                         in ease, they are the program that helps us to change the path execution of the program
*/

int main(){
    if (TOKEN)  std::cout << "less go" << std::endl;
    else    std::cout << "awwwwwww" << std::endl;
    return EXIT_SUCCESS;
}