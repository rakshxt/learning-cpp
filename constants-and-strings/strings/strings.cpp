#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <string>
#include <limits>
#include <ios>

/*
    std::string is a complex datatype defined in C++ used to do manipulations with strings 
    std::string can be used to store string literals in an object

    constexpr std::string is not allowed/supported till C++17 and earlier
*/

/*
    std::string should not be used in constexpr expression or instantiation
    std::string should not be used as a return type of a function as it would just make expensive copies
        --though it could be in the times:
                    -when returning local std::string variable
                    -when returning statement contains initialization of a new std::string
                    -when return statement returns the std::string returned from another function call or operation

    conclusion ::  literals std::string makes expensive copies and hence should be avoided from use, where performance matters
*/

// to flush the input buffer
[[maybe_unused]] void flushINP_BUFF(){std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');}
// we wont be in need of std::cin >> std::ws

int main(int argc, char const *argv[]){
    std::string name{"rakshxt"};    // cost expensive as everytime a string it initialized, the initializer is copied (for some reasons)
    std::cout << "my name is : " << name << std::endl;

    // input using strings
    // prefer std::getLine() rather than std::cin as because std::cin breaks in a whitespace and returns the characters before first encounter of whitespace
    // also prefer using std::cin >> std::ws to remove any leading whitespace
    // also prefer just flushing the input buffer before std::getLine()
    std::cout << "what\'s yours ? : ";
    std::getline(std::cin >> std::ws, name);    // re-assignment of "name", std::ws for ignorance of leading whitespaces
    std::cout << "Hey, " << name << ", how are you??\n";

    std::cout << "your name length : " << name.length() << ", nigga!" << '\n';
    // note that .length() returns object of type size_t and is unsigned, so we gotta explicitly convert it we we want to store that length of a string
    // else std::ssize(std::string object) can be used to get the signed length of std::string object but it is deprecated now
    // const int len{std::ssize(name)};     --> deprecated
    [[maybe_unused]] const int len{static_cast<int>(name.length())};

    return 0;
}
