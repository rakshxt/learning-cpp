// to use std::cout & std::cin
#include <iostream>

int add(int, int);      // tells the compiler the existence of the "add" function is in some other file
int subtract(int, int); //  "      "    "       "       "   "   "  "subtract" "    "  "   "    "    "

void run(){
    int x{}, y{};
    std::cout << "enter the numbers : ";
    std::cin >> x >> y;

    std::cout << x << " + " << y << " = " << add(x, y) << '\n';
    std::cout << x << " - " << y << " = " << subtract(x, y) << std::endl;
}