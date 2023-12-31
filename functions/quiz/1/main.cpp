// https://www.learncpp.com/cpp-tutorial/chapter-2-summary-and-quiz/

#include <iostream>
#include <cstdlib>

int readNumber();
void writeAnswer(int);


int main(){
    int x{readNumber()}, y{readNumber()};
    writeAnswer(x + y);
    return EXIT_SUCCESS;
}

int readNumber(){
    int input{};
    std::cout << "enter a number : ";
    std::cin >> input;
    return input;
}

void writeAnswer(int answer){
    std::cout << "result : " << answer << std::endl;
}