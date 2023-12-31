/*
    before the compilation of our .cpp file it goes through a "PREPROCESSING" phase where a program called preprocessor is run
    the preprocessor makes certain changes in text of our source code (in temporary files)
    
    most common work of preprocessor is like :  to ensure each .cpp file ends with a newline
                                                to remove(strip out) the comments
    
    whenever the preprocessor is run, it finds for the "preprocessor directives" in our source file.
    preprocessor directives are the instructions given to the preprocessor by us to perform specific text-manipulative tasks.
    directives starts with "#" and ends with a newline
*/

/*
    #include :
        whenever the preprocessor encounters a "#include <filename>" preprocessor directive in a .cpp file, it replaces the "#include" line with all the content of the file "filename"
        furthermore, the preprocessor directive of the added content is checked for further #include and other directives and same is done 
        after processing the source file, the preprocessor produces a result called translation unit which is what is sent to the compiler to be compiled

    #define :
        this preprocessor directive is used to define a "macro". A macro is a rule that defines how "input text" is converted into "replacement-output text"
        types :
            object-like macro definition
            function-like macro definition

            function-like macro definition:
                works just like a function

            object-like macro definition :
                types :
                    with substitution text:
                        #define identifier substitution_text
                            whenever the preprocessor directive encounters the "identifier", it replaces the identifier with "substitution_text"
                            this utility was used in C to "name literals(or literal values)"

                    without substitution text:
                        #define identifier
                            whenever the preprocessor directive encounters the "identifier" in the source file, it replaces the identifier by "NOTHING"
                            this type is not for general purpose use
*/

#include <iostream> // preprocessor replaces this line with the contents defined in iostream file
#include <cstdlib>  // replaces this line with contents of cstdlib

#define NAME "rakshxt"  // replaces every occurance of NAME by "rakshxt" 

int main(){
    std::cout << "name : " << NAME << std::endl;
    // when the preprocessor encounters this, it replaces NAME by rakshxt so the above line looks like the following in the translation unit:
    // std::cout << "name : " << "rakshxt" << std::endl;s
    return EXIT_SUCCESS;
}