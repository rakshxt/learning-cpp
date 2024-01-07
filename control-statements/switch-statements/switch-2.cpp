#include <iostream>
#include <cstdlib>

/*
    FALLTHROUGH ::
        it is when, every statements of the specified labels inside a switch statement are expected

    REASON:
        when the expression/condition of the switch statement matches to a case label, the statements inside the corresponding cases label starts executing
        the execution stops onyl :
                - when it reaches to the end of the switch block
                - when it encounters a return or break statement(for halt)
                - when program stops unconditionally
            
        this is the reason why we use break/return statement inside the case labels, to stop the execution of the statements of the "expression corresponding case label"
        this generally stops the furthermore execution of the switch statement and proceeds further

    [[fallthrough]] attributes tells the compiler that a fallthrough is made "intentionally" and no warnings should be produced


    NOTE :
        no implicit scope is defined for each case statement, like if-else statement
        we can define variables before or after the case labels inside a switch statement,
        we should initialize variables inside a case only by making explicit block 
        like :
            case # :{
                const int somevariable{};
            }

        note that, all the stuffs defined inside a switch statements relates to a single scope
        hence, a variable defined inside one case label can be used by another case label even in the case when the case defining that variable was not called.
*/

void performFallthrough(){
    switch(1){
        case 1:
            std::cout << "case one passed\n";
            [[fallthrough]];
        case 2:
            std::cout << "case two passed\n";
            [[fallthrough]];
        case 3:
            std::cout << "third case passed\n";
            [[fallthrough]];
        default :
            std::cout << "default case passed\n";
    }
    std::cout << "passed all cases.\n";
}

int main(){
    performFallthrough();

    switch(1){
        case 0:
            int x;
            break;
        case 1:
            x=10;   // no need to re-define the variable "x", as a variable defined inside any case has scope for all cases in the same switch
            std::cout << x << '\n';
    }

    return EXIT_SUCCESS;
}