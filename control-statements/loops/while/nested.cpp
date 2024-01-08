#include <iostream>
#include <cstdlib>

/*
    Iteration : one complete cycle of a loop is called an iteration

    loops can be nested and for each iteration of an outer loop, inner loop will also be executed
    nesting of loops are helpful for methametical perception and should now be excelled by me
    syntax :
        while(cn1){
            while(cn2){
                statement2;
            }
            statement1;
        }

    working:
        for every iteration of loop of cn1 cn2 loop will execute too
*/

void run(){
    // took 3 years to understand today completely (DATE : 1/8/24)
    //                                             (TIME : 4:04PM)
    int row{1};
    while(row<=5){
        int column{1};
        while(column<=row){
            std::cout << column << ' ';
            ++column;   
        }
        std::cout << '\n';
        ++row;
    }
}

int main(){
    run();
    return EXIT_SUCCESS;
}