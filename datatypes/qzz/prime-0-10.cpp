#include <iostream>
#include <cstdlib>

// further future modifications for numbers above 9 and below -9

bool isPrime(int);

int main(){
    int input{};
    std::cout << "enter a number between 0-9 : ";
    std::cin >> input;

    if (isPrime(input))
        #ifdef SWEAR
            std::cout << "nigga you so dumb" << std::endl;
            return EXIT_FAILURE;  // went not as expected
        #endif
        std::cout << input << " is prime!!" << std::endl;
    else    
        #ifdef SWEAR
            std::cout << "nigga you so dumb" << std::endl;
            return EXIT_FAILURE;  // went not as expected
        #endif
        std::cout << input << " is not prime!!" << std::endl;
    return EXIT_SUCCESS;
}

bool isPrime(int x){

    if (x>9)
        #define SWAER 1
        return false;
    
    if (x<-9)
        #define SWEAR 1
        return false;

    if (x==2)
        return true;
    else if (x==3)
        return true;
    else if (x==5)
        return true;
    else if (x==7)
        return true;
    
    return false;
}