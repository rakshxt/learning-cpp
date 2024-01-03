#include <cstdlib>
#include <iostream>
#include <cstdint>

/*
    logical operators are those used to speficy more than one conditions in a conditional statement
        types :
                x && y -> evaluates true if both conditions x and y are true, else false
                x || y -> evaluates true if any of the condition(x or y) is true, else false
                !x     -> flips te boolean value of operand x
    
    these logical operators are used mostly to test multiple cases to execute conditional statements
    i.e. these statements are used mostly in if statements
*/

// reference for De Morgan's Laws
/* https://en.wikipedia.org/wiki/De_Morgan%27s_laws */

int main(int argc, char const *argv[]){

    std::cout << "!12 : " << !12 << '\n';   // 0
    std::cout << "!0  : " << !0  << '\n';
    std::cout << std::boolalpha << "!true : " << !true << ", !false : " << !false << "\n\n";

    std::int16_t p{}, q{};
    std::cin >> p >> q;
    // std::cout << p << ", " << q << std::endl;
    
    if (p>0 && p <10) std::cout << "0<" << p << "<10\n";
    if (q>0 && q <10) std::cout << "0<" << q << "<10\n";

    if (p==1 && q==2) std::cout << "p=1, q=2\n";
    if (p<0 || q<0) std::cout << "p or q is negative\n";


    return 0;
}
