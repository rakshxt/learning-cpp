#include <iostream>
#include <cstdlib>

void run(){
    for (int i{0}; i<=20; ++i){
        if (i%2==0)
            std::cout << i << " ";
    }
    std::cout << std::endl;
}

int main(){
    run();
    return EXIT_SUCCESS;
}