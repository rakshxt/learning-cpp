#include <iostream>
#include <cstdlib>
#include <cstdint>

/*
    do while-loops is a type of loop defined in C++
    syntax:
        do{
            statement....s
        }while(condition);
    
    Mechanism:
        the statements followed by do will always execute at least once (even if condition evaluates false) and then checks for the condition
        if the condition returns true, again the execution path jumps over the do statement, if the condition returns false, loop construct is skipped

    no-one uses do-while(
        """"""""no one cares for do-while loop, so do others to me""""""""
    ), so ignore it
*/

int main(){

    std::int_fast8_t userinput{'m'};
    do{ // executes atleast once
        std::cout << "enter something : ";
        std::cin >> userinput;
    }while(userinput!='q' and userinput!='c');
    // }while (0!=0);   // false condition but the do-while executed atleast once nigga

    return EXIT_SUCCESS;
}