#include <iostream>
#include <cstdlib>

void swapWithVariable(int, int);
void swapWithoutVariable(int, int);
void showSwapped(int, int);

int main(){
    int a{}, b{};
    std::cin >> a >> b;
    std::cout << "a : " << a << "\nb : " << b << '\n';
    swapWithoutVariable(a, b);

    #if 0
        a=a-b;  // a = x-y
        b=b+a;  // b = b+a = x-y+y = x
        a=b-a;  // a = b-a = x-(x-y) = x-x+y = y
    #endif

    return EXIT_SUCCESS;
}

void swapWithoutVariable(int a /*x*/, int b /*y*/){
    a=a-b;  // a = x-y
    b=b+a;  // b = b+a = x-y+y = x
    a=b-a;  // a = b-a = x-(x-y) = x-x+y = y
    showSwapped(a, b);
}

void swapWithVariable(int a, int b){
    int temp{a};
    a=b;     // b done
    b=temp;
    showSwapped(a, b);
}

void showSwapped(int a, int b){
    std::cout << "swapped sucessfully\n"
              << "a : " << a << "\nb : " << b << std::endl;
}