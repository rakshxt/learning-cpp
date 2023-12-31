#include <cstdlib>
#include <iostream>

/*
    header guards ensures that the content of header file is not included more than once in a .cpp file
    as if it does, if the header file had a definition, that particular definition would be defined twice in the same program
    this will violate the ODR (ONE DEFINITION RULE) rule and hence compile time erorr would be the result.

    to this problem, the mechanism of header guard is used,
    header guard is a conditional compilation preprocessor directive "that defines a macro and check for its definition everytime the header file is included"

    helps from multiple definition of identifiers
    syntax :
        #ifndef SOME_NAME
        #define SOME_NAME
            ........ declarations
        #endif

    next time the header file content is copied in the same file, the #ifndef will check for "SOME_NAME"
    and for sure in the second time, "SOME_NAME" macro would be defined in the file and hence this #ifndef to #endif statements would be ignored
*/

int main() { return EXIT_SUCCESS; }