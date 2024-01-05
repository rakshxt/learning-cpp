// #include <iostream>

/*
    we got times when we need to prevent wastage of cpu cycles for the expressions that evaluated to a single unit everytime
    for this, the compiler does all the optimization by taking care of as-if rule (https://en.wikipedia.org/wiki/As-if_rule)

    we can help the compiler for optimization tasks

    CONSTANT EXPRESSIONS (compile-time expressions): those expressions that are evaluated by the compiler at compile time
                                                     such expressions contains compile-time constant variables, operators and functions supporting compile-time evaluation
                    
    COMPILE-TIME CONSTANT VARIABLES :   constant variables whose value(s) are known to the compiler at compile time are called constant variables
        only constant integral variables with constant expression as an initializer are COMPILE TIME CONSTANT VARIABLES
*/

int main(int argc, char const *argv[]){

    /*
        instead of doing,
            int x{8+9};
        we should prefer,
    */
    [[maybe_unused]] int x{17 /* 8+9=17 */};
                     // even better, make it a constant variable for compile-time evaluation and optimization
    [[maybe_unused]] const int ci{17};
    // this way the compiler would always be assured about the value of "ci" at compile time and can replace any appearance of "ci" by that value
    // and hence optimize-out(destruct/destroy) the constant variable

    return 0;
}
