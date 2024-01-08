#include <iostream>
#include <cstdint>
#include <cstdlib>


void run(){
    std::int_fast16_t num1{}, num2{};
    std::cout << "numbers : ";
    std::cin >> num1 >> num2;

    std::int_fast16_t count{1}; const std::int_fast16_t temp{num1};
    while(count<num2){
        num1+=temp;
        ++count;
    }
    std::cout << temp << " x " << num2 << " = " << num1 << '\n';
}

int main(){
    run();

    return EXIT_SUCCESS;
}