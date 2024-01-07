#include <iostream>
#include <cstdlib>
#include <cstdint>

/*  
    we can make a stack of cases to execute a single statement if any of the case matches
*/
bool isVowel(std::int_fast8_t ch){
    switch(ch){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':   // note that this is not fallthrough, as no statement exists and hence no statement is executing
            return true;
        default:
            return false;
    }
}

std::int_fast8_t getAlphabet(void){
    std::int_fast8_t input;
    std::cout << "enter the alphabet : ";
    std::cin >> input;
    return input;
}

int main(){
    const std::int_fast8_t input{getAlphabet()};
    std::cout << input << " is a " << ((isVowel(input)) ? "vowel\n" : "consonant\n");
    return EXIT_SUCCESS;
}