#include <iostream>
#include <cstdlib>
#include <string>
#include <string_view>

// totally valid, as no destruction of "true" or "false" occurs, as C-style string literals have life-time till the program destruction
std::string_view returnSomething(int a){
    return (a==0) ? "true" : "false";
}

// undefined result
std::string_view returnUndefined(int a){
    std::string result{"test"};
    if (a==0)   result=="true";
    else        result=="false";
    return result;  // now because result would be destroyed after function termination, the view would be set to an invalid non-existing string
    // while this problem can be done by returning a C-style string literal (as done in function returnSomething())
}

// another safe use of string_view
std::string_view returnLonger(std::string_view sv1, std::string_view sv2){
    return (sv1.length() > sv2.length()) ? sv1 : sv2;
}

std::string_view getFrontCropped(std::string_view sv, const int prefix){
    sv.remove_prefix(prefix);
    return sv;
}

int main(){
    using namespace std::string_literals;
    std::cout << returnSomething(0) << '\n';                // valid    
    std::cout << returnUndefined(0) << '\n';                // undefined behaviour as string_view is dangling
    std::cout << returnLonger("rakshxt"s, "joe"s) << '\n';  // temporary std::string literals that would be destroyed after output statement
                                                            // but now because their view is being used before their destruction, view won't be dangling
    std::cout << getFrontCropped("rakshxt", 3) << std::endl;// valid due to indirect reference 
    return EXIT_SUCCESS;
}