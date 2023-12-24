#include <iostream>

/*
    likewise
            std::cout << "Hello, " << "World";
                to print more than one text thru the same statement
    we can also use
            std::cin >> x >> y;
                to take and extract more than one value

    note that the its advisory that we should enter both the inputs after a space in the same line of the terminal

*/

int main(){

    int age{}, year_of_passing{};

    std::cout << "enter your age and year of passing : ";
    std::cin >> age >> year_of_passing; // place the first input in the variable "age" and then the second input after a space in the variable "year_of_passing"

    std::cout << "rakshxt is " << age << " years old and he's gonna pass in year " << year_of_passing << "!\n";

    return 0;
}