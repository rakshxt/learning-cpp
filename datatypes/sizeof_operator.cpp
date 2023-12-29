// seek : https://en.cppreference.com/w/cpp/language/types

#include <iostream>
#include <cstdlib>
#include <iomanip>

/*
    sizeof operator - a uranary operator that tells how much size(in bytes) a datatype or a variable occupies in the memory
    cannot be used on incomplete type as sizeof(void) would throw an error
*/

void getDataTypeSizes(void){
    std::cout << std::setw(16) << "bool : " << sizeof(bool) << " bytes\n";
    std::cout << std::setw(16) << "char : " << sizeof(char) << " bytes\n";
    std::cout << std::setw(16) << "int : " << sizeof(int) << " bytes\n";
    std::cout << std::setw(16) << "long : " << sizeof(long) << " bytes\n";
    std::cout << std::setw(16) << "long long : " << sizeof(long long) << " bytes\n";
    std::cout << std::setw(16) << "float : " << sizeof(float) << " bytes\n";
    std::cout << std::setw(16) << "double : " << sizeof(double) << " bytes\n";
    std::cout << std::setw(16) << "long double : " << sizeof(long double) << " bytes\n";
}

int main(){ 
    getDataTypeSizes();
    return EXIT_SUCCESS;
}