#include <iostream>
#include <cstdlib>

/*
    A switch statement is a type of conditional statement which is best used when we want to test an expression or a variable for equality 
    syntax:
        switch (condition){
            case #1:
                statement_1;
                break;
            case #2:
                statement_2;
                break;
            ...............
            ...............
            ...............
            ...............
            ...............
            ...............
            case #n 
                statement_n;
                break;
            default:
                statement_default;
                break;
        }

    MECHANISM (main):
            the condition/expression is evaluated first and then the statements of matching case labels are executed
            example:    if condition evaluates to 1
                        and if any case label has the specified value 1, then that case label's statement would be executed
                        furthermore, after the execution the whole switch statement will "break" and execution path would be changed to the next line of the end of switch block
    
    BREAK STATEMENT(break;):
            the break statement tells the compiler that we are done executing all the desired statements inside a switch statement and the execution path should now be changed and started from the next line of switch end block
*/

void numberInWords(int n){
    switch (n){
        case 1:     // case label with value 1 (not case-label-1)
            std::cout << "one\n";
            break;
        case 2:
            std::cout << "two\n";
            break;
        case 3:
            std::cout << "three\n";
            break;
        default:
            std::cout << "tf?\n";
            break;
    }
    // after executing the statements of the desired case label, the execution path comes here now all the statements after this would be executed(if specified)
    std::cout << "after switch : 🙂‍↔️\n";
}

int getNumber(){
    int input{};
    std::cout << "enter the number : ";
    std::cin >> input;
    return input;
}

int main(){
    const int input{getNumber()};
    numberInWords(input);
    return EXIT_SUCCESS;
}