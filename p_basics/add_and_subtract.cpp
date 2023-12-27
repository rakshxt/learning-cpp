#include <iostream>

int main()
{

    // x-> userInput1
    // y-> userInput2
    int x{}, y{};

    //  console commanding (asking for input and storing it in variables)
    std::cout << "enter an integer : ";      // asks for first input
    std::cin >> x;                           // stores first userInput in x
    std::cout << "enter another integer : "; // asks for another input
    std::cin >> y;                           // stores second userInput in y

    std::cout << x << " + " << y << " = " << (x + y) << '\n';      // not flushing buffer, idk why
    std::cout << x << " - " << y << " = " << (x - y) << std::endl; // flushing buffer

    return 0;
}