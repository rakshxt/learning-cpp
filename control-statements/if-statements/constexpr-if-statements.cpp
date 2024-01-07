#include <iostream>
#include <cstdlib>
#include <string>
#include <string_view>
#include <type_traits>

#define mml constexpr

/*
    a constexpr if statement is that whose conditional is evaluated at compile time rather than runtime
    as mostly the conditional of an if statemnt is evaluated at runtime and not compile time
    so if we have a compile time conditional expresison inside an if statement, we should rather use if-constexpr-statements
*/

mml int getvalue(){
    if (std::is_constant_evaluated()) return 2;
    return 1;
}

int main(){

    if mml (getvalue()==2)  std::cout << "this if statement is compile time evaluated...\n";

    int x{getvalue()};  // now not a constexpr variable
    // the getvalue() function is not evaluated in compile-time as its not in the "must execute" category
    //                                                          simply its not being used in the place of a constant expression

    if(x==1)       std::cout << "this if is runtime evaluated...\n";

    return EXIT_SUCCESS;
}