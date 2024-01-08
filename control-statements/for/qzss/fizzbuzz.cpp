#include <iostream>
#include <cstdlib>
#include <string_view>

void fizzbuzz(int count){
    std::string toShow{"."};
    for (int index{1}; index<=count; ++index){
        if (index%3==0 && index%5==0)       std::cout << "fizzbuzz" << '\n';
        else if(index%3==0 && index%5!=0)   std::cout << "fizz" << '\n';
        else if(index%5==0 && index%3!=0)   std::cout << "buzz" << '\n';
        else if(index%7==0)                 std::cout << "pop" << '\n';
        else                                std::cout << index << '\n';
    }
}

int main(){
    fizzbuzz(150);
    return EXIT_SUCCESS;
}