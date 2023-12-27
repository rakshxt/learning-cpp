#include <iostream>

/*
    An expression is nothing but a collection of "variables", "literals", "operators" and "function calls"
    Executing an expression is called "evaluation"
    ex: x=(2+5)*4 is an expression that contains operators and literals

    an expression and statement both are different terms
    expression should be used within the statements
    but, sometimes expressions can be used independently and such expressions are called "expression statements"

    types :
            subexpressions :        expressions used as operands
                ex: int x = 2+3;

            full expressions :      expressions that are not used as operands
                ex: 2+3; and also expression statements are full expressions

            compound expressions :  expressions that have two or more operands
                ex: int m = 2 + (3 * 4);

*/

int main()
{

    2 + 3; // valid but useless expression
    int x{}, y{};
    y = 19; // expression statement

    x = (y - 9) * 10;                 // expression statement
    [[maybe_unused]] int z = x - 100; // statement with expression

    std::cout << x << std::endl;
    std::cout << (y - 9) << std::endl; // expression statament (as because std::cout and std::endl is considered as operands)
    std::cout << z << std::endl;

    return 0;
}