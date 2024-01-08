#include <iostream>
#include <cstdlib>
#include <cstdint>

/*
    condition that always evaluates to true will help forming an infinite lopp
    syntax:
        while(true)
            statement
    
    such infinite loops can be exited with the help of return, break, goto or exit statements (or by killing the run of program (ctrl+c/z))
*/

int main(){
    while(true){
        std::uint_fast8_t uI{};
        std::cout << "enter any character (q for exit) : ";
        std::cin >> uI;

        if (uI=='q' || uI=='Q'){
            std::cout << "exitting...\n";
            break;
        }
    }
    std::cout << "outside an ♾️  loop...\n";
    return EXIT_SUCCESS;
}