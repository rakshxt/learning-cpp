#include "./headers/add.hpp"
#include "./headers/subtract.hpp"
#include "./headers/multiply.hpp"
#include "./headers/divide.hpp"
#include "./headers/getResult.hpp"

#include <cstdlib>
#include <iostream>


int main(){
    unsigned short int option{};
    int p{}, q{};
    std::cout << "--------------------------CALCULATOR--------------------------\n"
              << "1. ADD\n2. SUBTRACT\n3. MULTIPLY\n4. DIVIDE\n";
    
    std::cout << "enter the numbers : ";
    std::cin >> p >> q;
    
    std::cout << "Select an option : ";
    std::cin >> option;
    getResult(option, p, q);

    return EXIT_SUCCESS;
}