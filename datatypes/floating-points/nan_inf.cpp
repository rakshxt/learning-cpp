/*
    "compiler specific"
    NAN -> not a number
    INF -> infinity
*/

#include <iostream>
#include <cstdlib>
// #include <iomanip>

int main(){
    std::cout << 5.0f/0.0f << std::endl;    // +inf
    std::cout << -5.0f/0.0f << std::endl;   // -inf
    std::cout << 0.0f/0.0f << std::endl;    // nan (not a number)
    return EXIT_SUCCESS;
}