//https://www.learncpp.com/cpp-tutorial/introduction-to-type-conversion-and-static_cast/

#include <cstdint>
#include <cstdlib>
#include <iostream>

// will be using int_fast8_t
int main(){

    std::int_fast8_t input{};
    std::cout << "enter a keyboard character : ";
    std::cin >> input;

    std::cout << "You entered \'" << input << '\'' << " which has ASCII code " << static_cast <int> (input) << std::endl;

    return EXIT_SUCCESS;
}