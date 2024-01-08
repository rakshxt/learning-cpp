#include <iostream>
#include <cstdint>
#include <cstdlib>

/*
    a for statement is a type of looping statemet in C++, it is most used looping statement due to its compact nature
    syntax:
        for (init-statements; condition; end-expression){
            ...
        }
    mechanism:
        when the for-loop statement is first entered, the init-statements are executed only once, then the condition is evaluated and if it returns true, statements are executed
        after the execution of statements, the end-expression is then evaluated. We generally provide an incrementing or decementing statemet for our loop variable so that the loop condition doesn't evaluated to true always

    NOTE:
        -   loop variable have loop scope, meaning that they are visible from the point of definition to the end of the loop
        -   multiple initialization, conditional and end statements can be specified using the comma operator
        -   for loops can also be nested like while and do-while

    OFF-BY-ONE:
        it is an error caused when the loop iterates more more or less than expected
        happens due to misuse of relational operators "</>" and "<=/>="

    // FOR MORE: https://www.learncpp.com/cpp-tutorial/for-statements/
*/

double pow(double base, double exponent){
    double result{base};
    if (exponent>0){
        for (int i{1}; i<exponent; ++i){
            result=result*base;
        }
    }else{
        std::cout << -exponent << "xx";
        for (int i{1}; i<(-exponent); ++i){
            result=result*base;
        }
        return 1/result;
    }

    return result;
}

int main(){
    for(int iii{0}; iii<10; ++iii)
        std::cout << iii << ' ';

    std::cout << "\ndone!\n";
    std::cout << "12^2 : " << ::pow(12, 2) << '\n';
    std::cout << "2^(-2) : " << ::pow(2, -3) << '\n';

    return EXIT_SUCCESS;
}