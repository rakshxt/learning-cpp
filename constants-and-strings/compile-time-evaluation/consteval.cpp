#include <iostream>
#include <cstdlib>
#include <type_traits>
#include <iomanip>


/*
    a consteval function is a function that is always evaluated at compile time and if fails to do so, compiler will throw an error
    a consteval function is always evaluated in compile-time meaning that they can always be used in constant expressions
*/

consteval bool eval(){
    if (std::is_constant_evaluated())   return true;
    else return false;       // an error would occur before this line as this will always be compile-time evaluated
}

consteval int x(int x){
    return x;
}

int main(){
    std::cout << std::boolalpha << eval() << '\n';
    
    // if consteval function is used in the place where compile-time evaluation is not possible, then compiler will throw an error
    // or if consteval function can't be evaluated at compile-time then also it will throw an error
    int m{10};
    // std::cout << x(m) << std::endl; // arguments to consteval should be constexpr argument otherwise consteval will not execute and compiler will throw an error

    return EXIT_SUCCESS;
}