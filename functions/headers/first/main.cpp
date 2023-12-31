#include "add.hpp"  // replaced by content of add.hpp
#include "info.hpp" // replaced by content of info.hpp
#include <iostream> // replaced by content of iostream
#include <cstdlib>  // replaced by content of cstdlib

int main(){
    
    info(); // forward declared in add.hpp, so no problem

    std::cout << "\n2 + 3 = " << add(2, 3) << std::endl;// add(int, int) forward declared in add.hpp

    return EXIT_SUCCESS;
}
// won't compile until we do:
//              g++ main.cpp info.cpp add.cpp -o main && ./main