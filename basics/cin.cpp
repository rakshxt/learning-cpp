#include <iostream>

/**
 * std::cin is a variable defined in the iostream library of standard c++ which we use for to take user inputs
 * in contrast to the std::cout variable which uses the insertion operator (<<), cin uses the extraction operator (>>)
 *
 * these operators does nothing but to tell the direction of moving data
 * for example,
 *              std::cout << "rakshxt";  // this means that the data "rakshxt" is moving to the std::cout(considering it to be console)
 *              std::cin >> x;           // this means that the user entered value would be moved to the variable named "x"
 */

int main()
{

    // variable defined to store input from the user
    int age{};

    std::cout << "enter your age : ";                    // asks for the age
    std::cin >> age;                                     // "extracts" the user entered value in the variable age
    std::cout << "rakshxt is " << age << " years old\n"; // ...

    return 0;
}