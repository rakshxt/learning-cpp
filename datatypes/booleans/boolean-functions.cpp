#include <iostream>
#include <cstdlib>

/*
    functions returning boolean values:
            alot of functions that should/must only return boolean values should specify their returnType as bool
            these values returns "true" or "false" to the caller, based on the condition(s)
*/

bool isEqual(int, int);
bool isMacroDefined();   // macro - USING_BOOL

int main(){ 
    std::cout << isMacroDefined() << '\n';
    
    std::cout << isEqual(10, 9) << '\n';
    #if !(USING_BOOL)
        #define USING_BOOL
    #endif
    std::cout << isMacroDefined() << std::endl;

    return EXIT_SUCCESS;
}


bool isEqual(int a, int b){return a==b;}

bool isMacroDefined(){
    #ifndef USING_BOOL
        return false;
    #endif
    return true;
}

// #define USING_BOOL 1
// on sequential compilation, this will always be false