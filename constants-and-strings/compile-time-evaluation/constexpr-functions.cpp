#include <iostream>
#include <cstdlib>
#include <cstdint>
#include <iomanip>
#include <string>
#include <string_view>

#include <type_traits>

/*
    a function that "can be evaluated" at compile time and "can be used in a constant expression" is called a constexpr function and is defined by placing a constexpr keyword before the type
    
    NOTE :: 
        a constexpr function should call a non-constexpr function "conditionally" and the arguments to the constexpr function should be compile-time constants, in order to evaluate the function in compile time
        a constexpr function must be evaluated at compile time if the return value of the function is used in the place of a constant expression

        A constexpr function can also be evaluated at runtime if it doesnt meet the above requirements
        A constexpr function's parameter cannot have a constexpr function, as doing so would make the function loose its runtime execution capability

        to check if a constexpr function is evaluating at compile time or not, use the std::is_constant_evaluating() function that returns a bool indicating whether the function is compile-time evaluating or not

*/

constexpr int eval8(){return 8;}

constexpr bool eval(){
    if (std::is_constant_evaluated())   return true;
    return false;
}

int main(){
    std::cout << eval8() << '\n';   // may or may not evaluate at compile time, generally at runtime as it is not used in the place where a constant expression is required

    constexpr int m{eval8()};       // must be evaluated at compile-time as it's return value is used in the place where a constant expression is required

    std::cout << std::boolalpha << eval() << '\n';  // true if evaluated at compile-time
    constexpr bool bb{eval()};      
    std::cout << bb << '\n';                        // must be true (and indeed is true)

    return EXIT_SUCCESS;
}