/*
    conditional compilation preprocessor directives helps us to specify the condition under which the program should compile or not
    
    #ifdef  --> is used to check whether an identifier is #defined previously, if yes, then run the lines between #ifdef and #endif
    #ifndef --> opposite of #ifdef, runs the block of code inside of it if an identifier is not #defined
    #endif  --> is specified to terminate scope of conditional compilation preprocessor directives
    #if 0 -> doesnt compile the lines between #if 0 and #endif
    #if 1 -> compiles the lines between #if 1 and #endif (as like regular)
*/

#include <iostream>
#include <cstdlib>

#define PI 3.1415


int main(){
    #ifdef PI
        std::cout << "PI : " << PI << '\n';
    #endif

    #if 0
        anything now would not be compiled by the compiler, just like comments
        this methodology is used whenever we want to "nest" comments

        although this body should not contain any comment
    #endif

    #if 1
        #if !defined NAME
            #define NAME "rakshxt"
        #endif

        #if defined NAME
            std::cout << "name : " << NAME;
        #endif
    #endif

    return EXIT_SUCCESS;
}