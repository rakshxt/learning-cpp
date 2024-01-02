#include <iostream>
#include <cstdlib>

/*
    boolean datatype (INTEGRAL BOOLEAN):
        a boolean datatype helps us to store two possible values of "true" and "false"
        in memory, booleans are stored in the form of integers, 0 for false and 1 for true
    booleans can be assigned value by either using "true" or "false" keyword or by specifying 0 or 1 (false and true, respectively)

    boolean datatype is of great uses and are very common in a programming language
    by default booleans values are converted into integers by std::cout 
    std::boolalpha allows the console to show "true" and "false" version of the boolean variables rather than integer one

    in the place where integers can be converted into booleans, 0 is false and any other integer is true
    NOTE : list initialization is one such exception where we cannot "narrow convert" int to bool
*/


int main(){
    std::cout << true << '\n';
    std::cout << false << '\n';
    std::cout << std::boolalpha;
    std::cout << true << '\n';
    std::cout << false << '\n';

    bool bInput{}; // auto initialized with 0(false)
    std::cout << "enter a boolean input : ";
    std::cin >> std::boolalpha;
    std::cin >> bInput;
    std::cout << bInput << std::endl;

    return EXIT_SUCCESS;
}