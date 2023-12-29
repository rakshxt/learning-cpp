#include <iostream>
#include <cstdlib>


// try commenting these 5 lines out
int add(int, int);
int multiply(int, int);
int sub(int, int);
int divide(int, int);
void showResult(int, int);

int main(){
    int a{}, b{};
    std::cout << "enter the numbers separated by spaces : ";
    std::cin >> a >> b;
    showResult(a, b);
    
    return EXIT_SUCCESS;
}

void showResult(int x, int y){
    std::cout << x <<" x " << y << " = " << multiply(x,y) << '\n';
    std::cout << x <<" / " << y << " = " << divide(x,y) << '\n';
    std::cout << x <<" + " << y << " = " << add(x,y) << '\n';
    std::cout << x <<" - " << y << " = " << sub(x,y) << std::endl;
}

int add(int x, int y){
    return x+y;
}

int sub(int x, int y){
    return x-y;
}

int multiply(int x, int y){
    return x*y;
}

int divide(int x, int y){
    return x/y;
}