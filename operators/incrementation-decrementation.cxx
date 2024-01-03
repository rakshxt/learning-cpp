#include <iostream>
#include <cstdlib>


/*
    pre:    
         ++x
         --x
    post:
        x++
        x--

    these operators are used to increase/decrease the value of x by 1 and then store it in x


    SIDE EFFECTS :
            a function or an expression is said to produce a side effect if it produces observable effect beyond returning a value
            ex :
                x = 10;
                produces a side effect of changing the value of x permanently
        
        side effects can produce undefined behaviour
                as :
                        x=1
                        (x + ++x)
                        This expression is compiler specific (depends whether compiler follows L->R or R->L association)
                        in gcc and microsoft visual studio its compiled as :
                                                                        (2 + 2)
                                                                        the ++x is performed first
                
    NOTE :  
            the order of evaluation of function arguments or operands of an operator is not defined by C++ itself
            its all compiler specific (CLANG, GCC, MICROSOFTVISUALSTUDIO)
*/

int main(){

    // pre
    int m={1};
    std::cout << ++m << '\n';  // ++1 = 2
    std::cout << m++ << '\n';  // 2++ = 2  ------> m=3
    std::cout << m << '\n';

    // side effect cases
    int x{10};
    std::cout << (x + ++x) << '\n';    // 11 + 11
    x=10;
    std::cout << (x + x++) << std::endl;    // if x++ is evaluated first, this would be evaluated as : (11, 10)

    return EXIT_SUCCESS;
}