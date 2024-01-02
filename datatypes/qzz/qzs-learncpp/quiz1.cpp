#include <iostream>
#include <cstdlib>
#include <cstdint>
#include <limits>
#include <ios>

std::int_fast8_t getOperator(void);
void getAndPrintResult(double, double, std::int_fast8_t);
double getInptut(void);

int main(){
    double inp1{getInptut()}, inp2{getInptut()};
    getAndPrintResult(inp1, inp2, getOperator());
    return EXIT_SUCCESS;
}

double getInptut(){
    double i{};
    std::cout << "Enter a double value : ";
    std::cin >> i;

    return i;
}

std::int_fast8_t getOperator() {
    std::int_fast8_t o{};
    std::cout << "Enter +, -, *, or / : ";
    std::cin >> o;
    // flush unnecessary input buffer
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    return o;
}

void getAndPrintResult(double val1, double val2, std::int_fast8_t o){
    double result{};
    if (o == '+')
        result = val1 + val2;
    else if (o=='-')
        result = val1 - val2;
    else if (o=='*')
        result = val1 * val2;
    else if (o=='/')
        result = val1/val2;
    else{
        std::cout << "nah, nah, nah";
        return;
    }

    std::cout << val1 << ' ' << o  << ' ' << val2 << " = " << result << std::endl;
}