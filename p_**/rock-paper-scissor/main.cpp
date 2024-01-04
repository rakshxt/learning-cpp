#include <cstdint>
#include <iostream>
#include <cstdlib>
#include <ios>
#include <limits>
#include <experimental/random>

#include "./main.hxx"

std::uint_fast8_t generateRandomGuess(){
    const int randomNumber = std::experimental::randint(0, 3);
    if (randomNumber == 0){
        std::cout << "computer choosed : \'r\'\n" ;
        return static_cast<std::uint_fast8_t>('r');
    }
    if (randomNumber == 1){
        std::cout << "computer choosed : \'p\'\n" ;
        return static_cast<std::uint_fast8_t>('p');
    }
    if (randomNumber == 2){
        std::cout << "computer choosed : \'s\'\n" ;
        return static_cast<std::uint_fast8_t>('s');
    }
    return 0;
}

void getResults(std::uint_fast8_t userInput, std::uint_fast8_t compGuess){
    if (userInput!=0){
        if (userInput=='r'){
            if (compGuess=='p')   std::cout << "computer won, you looser!!" << std::endl;
            if (compGuess=='r')   std::cout << "draw!!" << std::endl;
            if (compGuess=='s')   std::cout << "you won!" << std::endl;
        }else if (userInput=='p'){
            if (compGuess=='p')   std::cout << "draw!!" << std::endl;
            if (compGuess=='r')   std::cout << "you won!" << std::endl;
            if (compGuess=='s')   std::cout << "computer won, you looser!!" << std::endl;
        }else if (userInput=='s'){
            if (compGuess=='p')   std::cout << "you won!!" << std::endl;
            if (compGuess=='r')   std::cout << "computer won, you looser!!" << std::endl;
            if (compGuess=='s')   std::cout << "draw!!" << std::endl;
        }
    }else{
        std::cout << "fuck yourself!!" << std::endl;
        std::exit(compGuess);
    }
}

std::uint_fast8_t getUserInput(void){
    std::uint_fast8_t input{};
    std::cout << "choose ur weapon (r, p, s) : ";
    std::cin >> input;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    if (input=='r' || input=='p' || input=='s') return input;

    return 0; /* range(uint_fast8_t --> 0 to 255), hence overflow for -1 */
}

int main(){
    std::uint_fast8_t uI{getUserInput()};
    getResults(uI, generateRandomGuess());
    return EXIT_SUCCESS;
}