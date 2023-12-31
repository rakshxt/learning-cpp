#include <iostream> // preprocessor replaces this line with the contents of iostream file 
#include <cstdlib>  // preprocessor replaces this line with the contents of cstdlib file
#include <iomanip>

#define NAME        "rakshxt"
#define AGE         17
#define LANGUAGE    "C++"
#define GITHUB      "https://github.com/rakshxt"

/*
    scope of #define:
        from the point of creation to the end of the file
*/

int main(){
    std::cout << "name" << std::setw(4) << ": " << NAME
              << "\nage" << std::setw(5) << ": " << AGE
              << "\nlang" << std::setw(4) << ": " << LANGUAGE
              << "\ngithub" << std::setw(1) << ": " << GITHUB << "\n\n";
    

    // predefine(pre-existing in all translation unit files) macros
    std::cout << __DATE__ << '\n';
    std::cout << __TIME__ << std::endl;

    return EXIT_SUCCESS;
}