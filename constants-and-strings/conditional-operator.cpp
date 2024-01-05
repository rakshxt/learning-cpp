#include <iostream>
#include <cstdlib>

/*
    Conditional Operator (also known as TERNARY OPERATOR) is a kind of short-if else statement
    FORM:  
            condition ? true_expression : false_expression
    MECHANISM :
            if condition evaluates to true, "true_expression" would be evaluated and returned, otherwise "false_expression" would be returned
    USE CASES:
            1. when we want to initialize a variable with 2 possible values, according to the condition
            2. when we want to assign a variable '  '   '   '   '   '   '   '   '   '   '   '   '   '   
            3. when we want to return two possible values from a function
            4. when we have two possible values to provide as an argument to the function 
*/

bool isEven(int num){
    return ((num%2==0) ? true : false);
    // check if num%2==0, if yes, return true, else false
}

bool isOdd(int num){
    return ((num%2!=0) ? true : false);
}

int main(int argc, char const *argv[]){
    int n{};
    std::cout << "enter a number : ";
    std::cin >> n;
    std::cout << n << (isEven(n) ? " is even!!" : " is odd!") << std::endl;
    // NOTE : both the operand should be of same type or should implicitly be convertible to same type
    //        else try to explicitly convert both the operands to same type;
    return EXIT_SUCCESS;
}
