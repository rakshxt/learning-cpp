#include <iostream>
#include <cstdlib>

int getInteger(); // tells the compiler that this function is defined somewhere else(in this case --> in some other source file)

int main(){

    int x{getInteger()}, y{getInteger()};

    std::cout << x << " + " << y << " = " << (x + y) << '\n';
    std::cout << x << " - " << y << " = " << (x - y) << std::endl;

    return EXIT_SUCCESS;
}