#include <iostream>
#include <cstdlib>

int getInteger(); // tells the compiler that this function is defined in some other part of the program(in this case --> in some other source file)

int main(){

    int x{getInteger()}, y{getInteger()};

    std::cout << x << " + " << y << " = " << (x + y) << '\n';
    std::cout << x << " - " << y << " = " << (x - y) << std::endl;

    return EXIT_SUCCESS;
}