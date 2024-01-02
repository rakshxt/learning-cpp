#include <iostream>


int getASCII(int ch){
    return ch;
}

int main(){
     std::int_fast8_t input{};
    std::cout << "enter a keyboard character : ";
    std::cin >> input;

    std::cout << "You entered \'" << input << '\'' << " which has ASCII code " << getASCII(input) << std::endl;
    return EXIT_SUCCESS;
}