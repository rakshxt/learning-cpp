#include <iostream>
#include <cstdlib>
#include <cstdint>


std::int_fast8_t getOperator(void){
    std::int_fast8_t op{};
    std::cout << "enter the operator : ";
    std::cin >> op;
    return op;
}

std::int16_t getNumber(int hastag){
    std::int16_t input{};
    std::cout << "enter number #" << hastag << " : " ;
    std::cin >> input;
    return input;
}

void calculate(std::int16_t num1, std::int16_t num2, std::int_fast8_t op){
    int result{};
    switch (op){
        case '+':
            result=num1+num2;
            break;
        case '-':
            result=num1-num2;
            break;
        case '*':
            result=num1*num2;
            break;
        case '/':
            result=num1/num2;
            break;
        default:
            std::cout << "enter a valid operator.... nigga!\n";
            return;
    }
    std::cout << num1 << ' ' << op << ' ' << num2 << " = " << result << '\n';
}

int main(){
    const std::int16_t num1{getNumber(1)};    const std::int16_t num2{getNumber(2)};
    calculate(num1, num2, getOperator());
    return EXIT_SUCCESS;
}