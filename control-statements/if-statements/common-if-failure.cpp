#include <iostream>
#include <cstdint>
#include <cstdlib>

/*
    rather than nested if-else statements, logical statements can also be used for "flattening"("shortening") of nested-if statements
    nested if statement should be kept in a block so that we don't get confused for the leading else statement

    initialization inside an if statement
*/

int main(){

    // using logical operators:::
    std::int16_t x{}, y{};
    std::cout << "enter two numbers : ";
    std::cin >> x >> y;

    // unconventional
    #if 0
        if (x>0){
            if (y>0)
                std::cout << "x and y are both positive...\n";
            else 
                std::cout << "only x is positve not y...\n";
        }else{
            std::cout << "x is negative...\n";
        }
    #endif

    // conventional 
    #if 1
        if (x>0 && y>0)         std::cout << x << " and " << y << " both are positive...\n";
        else if (x>0 && y<0)    std::cout << "only " << x << " is positve not "<< y << "...\n";
        else                    std::cout << x << " is negative...\n";
    #endif

    return EXIT_SUCCESS;
}