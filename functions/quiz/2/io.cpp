#include "./headers/io.hpp"

int readNumber(){ // hahahahaha ok
    int input{};
    std::cout << "enter a number : ";
    std::cin >> input;
    return input;
}

void writeAnswer(int result){
    std::cout << "result : " << result << std::endl;
}