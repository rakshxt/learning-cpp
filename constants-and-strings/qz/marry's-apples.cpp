#include <iostream>
#include <cstdlib>
#include <string>
#include <string_view>


consteval auto evaluateCompileTime(auto object){ return object; }

constexpr std::string_view getApplesPluralized(const int apples){ return (apples>1) ? "apples" : "apple"; }

constexpr std::string_view getQuantityPhrase(int amount){
    if (amount == 0) return "no";
    if (amount == 1) return "a single";
    if (amount == 2) return "a couple of";
    if (amount == 3) return "few";
    if (amount > 3)  return "many";
    else return "nah";
}


int main(){
    std::cout << "Mary has " << evaluateCompileTime(getQuantityPhrase(3)) << " " << evaluateCompileTime(getApplesPluralized(3)) << ".\n";

    std::cout << "How many apples do you have? ";
    int numApples{};
    std::cin >> numApples;

    std::cout << "You have " << getQuantityPhrase(numApples) << " " << getApplesPluralized(numApples) << ".\n";
    
    return EXIT_SUCCESS;
}