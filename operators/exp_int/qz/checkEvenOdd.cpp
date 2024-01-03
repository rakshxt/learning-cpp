#include <cstdlib>
#include <iostream>

bool isEven(long int num){return (num%2==0);}

std::int16_t getNumberInput(void){
    std::int16_t n;
    std::cout << "enter the number : ";
    std::cin >> n;

    return n;
}

void getToKnow(std::int16_t num){
    if (isEven(num))
        std::cout << num << " is even !" << std::endl;
    else
        std::cout << num << " is odd !" << std::endl;
}

int main(){

    std::int16_t number{getNumberInput()};
    getToKnow(number);

    return EXIT_SUCCESS;
}