#include <iostream>

int main(){

    // int x=10;
    // int y=x;
    int x = 10, y = x;
    int a(10), b = {14};
    int m{12}; // unused, -Werror will throw a compile time err

    // uncomment to remove compiler time errror
    // std::cout << y;
    // std::cout << a << std::endl;
    // std::cout << b << std::endl;

    return 0;
}