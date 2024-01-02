#include <cstdio>
#include <iostream>

/*
    explicit type conversion with static_cast<typename> (expr) operator
        it casts the type of the value of the expr to typename
*/

void funcPrintInt(int value){
    std::cout << value << std::endl;
}

void funcPrintDouble(double value){
    std::cout << value << std::endl;    // at least show 2 precisions
}

int main(){
    funcPrintInt(static_cast<int>(12.02));    // implicit conversion produces warnings
                                              // static_cast<int>(12.02) takes 12.02 as an input and produces the equivalent integer value and then returns it;
    funcPrintDouble(static_cast<double>(12)); // totally safe converison (from our side)
    // char to int conversion
    std::cout << "a(char) = " << static_cast<int>('a') << "(int)\n";

    std::cout << std::boolalpha << static_cast <bool> (1) << std::endl;
    std::cout << static_cast <bool> (12) << std::noboolalpha << std::endl; // true always(as because non-zero literals are always true and zero is false)


    return EXIT_SUCCESS;
}