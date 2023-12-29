#include <iostream>
#include <cstdlib>
// #include <iomanip>

void run(void){
    // very unexpected behaviours (undefined behaviour)
    unsigned long int uli{1};
    signed long int si{-3};
    std::cout << uli + si << std::endl;
}

int main(){
    run();
    return EXIT_SUCCESS;
}