#include <iostream>
#include <cstdint>
#include <cstdlib>

int mod(int);
int getInput(void);

int main(){
    int p{getInput()};
    std::cout << "|" << p << "| = " << mod(p) << std::endl;
    return EXIT_SUCCESS;
}

int getInput(void){
    int inp{};
    std::cout << "enter the number : ";
    std::cin >> inp;
    return inp;
}

int mod(int x){
    if (x<0)
        return -x;

    return x;
}

