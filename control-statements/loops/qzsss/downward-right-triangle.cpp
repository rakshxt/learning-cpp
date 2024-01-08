#include <iostream>
#include <cstdlib>

void run(){
    int rows{1};
    while(rows<=5){
        int columns{5};
        while(columns>=1){
            if (columns<=rows){
                std::cout << columns << ' ';
            }else{
                std::cout << ' ' << ' ';
            }
            --columns;
        }
        std::cout << '\n';
        ++rows;
    }
}

int main(){
    run();
    return EXIT_SUCCESS;
}