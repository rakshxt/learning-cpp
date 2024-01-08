#include <iostream>
#include <cstdlib>
#include <cstdint>

/*
    a loop is nothing but a control flow statement that helps us to "execute a bunch of statements repeatdely until a condition is met"
    C++'s most fundamental(basic/easy) loop to implement is the while loop which is kind of similiar to if-else statement
    syntax:
            while(condition)
                statement(s);
    working:
        when the while statement is executed, the condition is checked everytime and if the condition/expression evaluated to "true" the followed statement is executed
        most importantly, after the execution of the statement(s) followed by the while statement, the execution path jumps over the top of the while statement and the same process is repeated again
        this repetitiion is held until the condition inside the while statement evaluates to "false"

    TERMINOLOGIES:
        loop variable :     a variable used to control the no. of times of execution of the loop
        counter variable:   the variable that counts the number of execution of the loop
            both these does'nt matter at all but remembering them won't give any sin

    beware using an unsigned integer as a loop variable as in case of backward looping, it can cause "wrap-around"
*/

int main(){
    int count{1};
    while(count<=10){   // counter variable
        std::cout << 9 << " x " << count << " = " << (9*count) << '\n';
        ++count;
    }
    std::cout << "\nloop exitted(0)\n";       // executed after the evaluation of 11<=10
    return EXIT_SUCCESS;
}