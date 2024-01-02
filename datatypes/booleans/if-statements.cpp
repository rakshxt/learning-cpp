#include <iostream>
#include <cstdlib>

/*
    an if statement is a conditional statement used for conditional statements (or conditional execution)
    in this, we provide a conditional statement that is basically an expression returining a boolean value of true or false
    if the conditional returns to true, statement specified inside the if would be executed
    else it will be skipped

    if-statement syntax(rule):
        if (condition)
            statement_if_true;

    if-else:
        an else statement can be proceeded by an if statement if we want to do something also when condition returns false
        syntax :
                if (condition)
                    statement_if_true;
                else    
                    statement_if_false;
            in this, if condition is true, if statement would be executed, otherwise statement inside else would be executed

    chained if-else (if-elseif-else):
        if we want to check multiple conditions simultaneously, we can use a chained if of the syntax
            if (condition1)
                statement_1;
            else if (condition2)
                statement_2;
            else if (condition3)
                statement_3;
            ....................
            ....................
            ....................
            ....................
            else 
                statement_false;

        working :
            if condition_1 is true, statement_1 would be evaluated
            if condition_2 is true, statement_2 would be evaluated
            and so on.......



    SUMMARY : IF, IF-ELSE AND CHAINED IF STATEMENTS ARE USED WHEN WE WANT TO EXECUTE OUR STATEMENTS ON SPECIFIC CONDITIONS (OR WHEN SOME SPECIFIC CONDITIONS ARE TRUE)

*/

int main(){
    if (0==0)
        std::cout << "0 == 0\n";

    int x{};
    std::cout << "enter an input : ";
    std::cin >> x;
    if (x==0)
        std::cout << x << " == 0";
    else if (x>0)
        std::cout << x << " is a positive number\n";
    else    
        std::cout << x << " is a negative number" << std::endl;

    return EXIT_SUCCESS;
}