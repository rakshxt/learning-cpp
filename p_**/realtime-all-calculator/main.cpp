#include <iostream>
#include <cstdlib>
#include <cstdint>


void run(){
    run:
        std::cout << "-----------------------------------------\vCALCULATOR\v-----------------------------------------\n";
        std::int16_t num1{}, num2{};
        std::int_fast8_t op;
        std::cin >> num1 >> op >> num2 ;

        std::int16_t result{};
        switch (op){
            case '+':
                result=num1+num2;
                break;
            case '-':
                result=num1-num2;
                break;
            case '*':
            case 'x':
                result=num1*num2;
                break;
            case '/':
                result=num1/num2;
                break;
            default:
                std::cout << "enter a valid operator.... nigga!\n";
                goto run;
        }
        std::cout << num1 << ' ' << op << ' ' << num2 << " = " << result << '\n';
}

int main(){
    run();
    return EXIT_SUCCESS;
}