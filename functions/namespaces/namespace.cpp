#include <iostream>
#include <cstdlib>

/*
    naming collision in a same .cpp file results in "compile error"
    naming collision in different .cpp file results in "linker error"

    a namespace is a region where we declare or define identifiers to escape from "ambiguity"
    a namespace provides a "scope-region" where we can define/declare our identifiers 
    in this way, the identifiers declared in our namespace would not collide with identical identifiers in other scopes
    identifiers of a namespace should be unique and should not "collide on themselves"

*/

/*
    global namespace :
        all the identifiers that are not defined in any namespace, function or class are implicitly set as a part of an implicitly namespace called global namespace(global scope)
        when two identical functions are defined in different files, the linker errors, reason is because both the function definition exists in the global namespace
    std namespace    :
        all the identifiers that CPP defines are put in the "std"(abbrevated for "standard") namespace so that they dont collide with the identifiers that we define in our program
    
    to access identifiers of a namespace we use the "::" scope-resolution-operator, 
        ex: std::cout
        the :: operator specifies the namespace to its left and the identifier to be used in its right
        also when no identifier/namespace is specified in the left of the :: operator, compiler assumes we are reffering to the global namespace
*/

void foo();     // function declared in global namespace
int cout{12};   // variable initialized in global namespace
int cin;        // variable declared in global namespace


int main(){

    std::cout << "value of globally defined cout : " << ::cout << std::endl;
    std::cout << "value of globally defined cin : " << ::cin << std::endl;
    foo();

    return EXIT_SUCCESS;
}

void foo(){
    using namespace std;
    // a namespace directive can be used in order to not explicitly specify the namespace name like std::cout
    cerr << "in foo()" << endl;
}   