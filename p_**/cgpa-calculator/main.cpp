#include <iostream>
#include <cstdlib>
#include <cstdint>
#include <iomanip>

#include "./main.hxx"

std::int_fast16_t getSubjectsNumber(){
    std::int_fast16_t n{};
    std::cout << "Enter number of subjects : ";
    std::cin >> n;

    return n;
}

void displayCGPA(std::int_fast16_t n, double sum){
    if (n>0 && sum!=0.0)
        std::cout << "Calculated CGPA : "
                  << sum/static_cast<double>(n) << std::endl;
}

double getSum(std::int_fast16_t n){
    if (n>0){
        std::cout << "enter grades : ";
        double g1{}, g2{}, g3{}, g4{}, g5{}, g6{}, g7{};
        if (n==5){
            std::cin >> g1 >> g2 >> g3 >> g4 >> g5;
            return (g1+g2+g3+g4+g5);
        }
        if (n==6){
            std::cin >> g1 >> g2 >> g3 >> g4 >> g5 >> g6;
            return (g1+g2+g3+g4+g5+g6);
        }
        if (n==7){
            std::cin >> g1 >> g2 >> g3 >> g4 >> g5 >> g6 >> g7;
            return (g1+g2+g3+g4+g5+g6+g7);
        }
    }else std::cout << "what the fuck bitch, kick yourself !\n";

    return 0.0;
}

int main(){
    std::int_fast16_t n{getSubjectsNumber()};
    displayCGPA(n, getSum(n));
    return EXIT_SUCCESS;
}