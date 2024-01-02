#include <iostream>
#include <cstdlib>


int main(){
    // though, a character variable can only take one input/value, std::cin still allows us to enter as many chars as we want till an ENTER
    // in this way, only the first letter(character more specifically) gets assigned and rest of the input taken is stored in the "input buffer"
    // an "input buffer" is a temporary memory location where the input is stored before getting into the running program

    char input{};
    std::cin >> input; // assuming more input characters (than 1)
    std::cout << input << '\n'; // only the first character input would be printed and rest is now "stored"/"queued" in the input buffer
    // now std::cin wont ask us to input a character or else, rather it will pick the first character queued in the input buffer
    std::cin >> input;
    std::cout << input << std::endl;


    return EXIT_SUCCESS;
}