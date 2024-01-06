#include <string_view>
#include <string>
#include <iostream>
#include <cstdint>
#include <cstdlib>
#include <limits>
#include <ios>


/*
    a std::string_view is c++ defined datatype which allows us to have a string in read only mode/view
    this is for the prevention of "expensive copied"(that is somehow slow) that the std::string offers with each initialization and copies

    std::string_view object does not make any copy of the initializer string rather they have the string in just read-only mode
    but, we can always re-assign the "read-only string literal provided to std::string_view object"

    C-style and std::string type string literals are implicitly converted to std::string_view when passed to a std::string_view object initializer or a function parameter
    std::string_view cannot be implicitly converted to std::string as std::string makes copies of its initializer and std::string_view provides the string literal to read-only mode(no copying)

    whenever a string is passes in the object of std::string_view, that literal, rather than getting copied and allocated to the memory of the object is just help there in read-mode and hence no copying happens at all 

*/

void printString(std::string_view str){
    /*
        in this case the "str" parameter will be initialized with the value provided in the argument
        but the matter of fact here is that the value of argument won't be copied, it would be just provided to "std::string_view str" in read mode
        this shit helps us to cope up from "expensive copied of string literals"

        if it were std::string type of the parameter::
            first the agument value would be copied
            then the copied value would be placed in the memory location of the function parameter
                results in EXPENSIVE COPIES
    */
    std::cout << str << '\n';
}

int main(int argc, char const *argv[]){
    std::string s{"rakshxt"};       // makes a copy of the literal "rakshxt" and then the copy is placed in the memory location of s
    std::string_view ssv{s};        // implicitly converted std::string to std::string_view as it is possible
    // now the ssv have only read-only access to the literal stored in `std::string s{}`

    printString(s);     // implicit conversion of std::string to std::string_view
    printString(ssv);   // same type of argument and parameter

    // re-assignment        --> doesn't changes the previously-viewing string value
    ssv="rakshxt rakshxt";
    printString(ssv);


    // explicit conversion of std::string_view to std::string
    // 1. put the std::string_view object/literal in the initializer of std::string (as this shit is somehow acceptable and doesnt throw narrowing conversion error)
    // 2. use static_cast<std::string>(std::string_view)
    using namespace std::string_view_literals;
    [[maybe_unused]] std::string strsvexp{"std::string_view type"sv};    // sv denoted string_view literal
    [[maybe_unused]] std::string strsvexp2 = static_cast<std::string>("rakshxt"sv);
    // std::string strsvexp3 = "rakhxt"sv;  --> no implicit conversion

    
    return EXIT_SUCCESS;
}
