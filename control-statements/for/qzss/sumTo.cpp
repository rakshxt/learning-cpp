#include <iostream>
#include <cstdlib>

int sumTo(int value){
    int rValue{0};
    for (int i{1}; i<=value; ++i)
        rValue=rValue+i;
    
    return rValue;
}

int main(){
    std::cout << sumTo(5) << '\n';
    return EXIT_SUCCESS;
}