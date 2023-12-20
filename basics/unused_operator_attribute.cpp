#include <iostream>

// preffered to compile this program from the terminal with g++ with "-Wextra" flag

int main(){
    // many a times when we dont want to get any warning cum error for unused variables, we shall use the "[[maybe_unused]]" attribute before the declatation
    // this tells the compiler that we are ok to not use the variable throughout the program, else with "-Wextra" flag g++ will throw an error

    [[maybe_unused]] int x;
    std::cout << "Compiled without any error even with -Wextra flag enabled" << std::endl;


    return 0;
}