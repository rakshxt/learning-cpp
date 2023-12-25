#include <iostream>
#include <cstdlib>

int getUserInput(){

    int input{}; // to store the user-input initially

    std::cout << "enter the number to be squared : ";
    std::cin >> input;

    return input;
}


int main(){

    int num{getUserInput()};

    std::cout << "(" << num << ")² = " << (num * num) << std::endl;

    return EXIT_SUCCESS;
}