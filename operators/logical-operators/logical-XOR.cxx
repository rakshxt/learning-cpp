#include <cstdlib>
#include <iostream>

/*
    LOGICAL XOR:
             x       y      xXORy
            true    true    false
            true    false   true
            false   true    true
            false   false   false
    
    operators :     
                x != y (assuming that x and y both are bool types, else irrelevant reuslt)
            to convert non-bool to bool in such case : either use static_cast(explicit conversion) or use !!(operand) (implicit conversion)

            static_cast<bool>(x) != static_cast<bool>(y)
            !!x != !!y
                as ! operator implicitly converts its operand to bool type
*/

int main(){
    std::cout << std::boolalpha << (true != false) << '\n'  // true
                << (!!(2) != false) << '\n'                 // true
                << (static_cast<bool>(-1) != true) << '\n'  // false
                << (!!(-12) != !! (0)) << std::endl ;       // true
    return EXIT_SUCCESS;
}