#include <iostream>
#include <cstdlib>

void run(){
    int rows{1};
    while(rows<=5){
        int column{5}       ;
        while(column>=rows){
            std::cout << column << ' ';
            --column;
        }
        std::cout << '\n';
        ++rows;
    }
}

int main(){
    run();
    return EXIT_SUCCESS;
}
