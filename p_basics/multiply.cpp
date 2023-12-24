#include <iostream>

int main(){

    // variable to store the user input
    int userInput{};

    // commanding console to ask for the number and store it in a variable
    std::cout << "Enter the number : ";
    std::cin >> userInput;

    // output
    std::cout << userInput << " x 2 = " << (userInput * 2) << std::endl; // flush the buffer
    std::cout << userInput << " x 3 = " << (userInput * 3) << std::endl;

    return 0;
}