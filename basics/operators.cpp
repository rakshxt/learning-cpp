#include <iostream>

/**
 * An operation is a process thru which two or more (or sometimes zero) input values (literals) yeilds a new output value 
 * the operations that are to be performed are denoted thru the symbols called operators (ex: + - * /)
 * 
 * the output value that an operation yeilds is called a "return value"
 * 
 * types of operators :
 *                      uranary operator - takes one operand  (ex: -5)
 *                      binary  operator - takes two operands (ex: 5+4)
 *                      ternary operator - takes three operands
 *                      nullary operator - acts on zero operand(s)
*/


/*
    NOTE :: operators always "returns values" (output values) and hence these values can be used or stored anywhere in the program


    the "=" and the "<<" operators returns the value to their left hand side
    example :
            x=y=5 would be computed as x=(y=5) 
                at first (y=5) will assign 5 at "y" and then the "=" operator returns the value "y" (Left hand operand) to be processed by next operation
                after the "y" is returned operation "x=y" will happen

    also :  
            std::cout << "Hello, " << "World!"; would be computed as (std::cout << "Hello, ") << "World!";
                at first the std::cout << "Hello, " will work out and after that the "<<" will return std::cout
                then the std::cout will take the value "World!" and then print it to the console
                innit amazing???
                
*/

int main(){

    int x{}, y{}, z{};
    x=y=10;  // computed as x=(y=10)
    std::cout << x << std::endl;
    std::cout << y << std::endl;

    // important 
    // the expression (z=18) will first assign 18 to the variable "z" after which the variable "z" would be returned by the "=" operator
    // further to the returning of "z", "z" will be then sent to conzole thru std::cout 
    std::cout << (z=18) << std::endl;
    std::cout << (y=((z=0)+1)) << std::endl;

    return 0;
}