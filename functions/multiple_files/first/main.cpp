#include <iostream>
#include <cstdlib>

// int add(int, int);      // tells the compiler the existence of the "add" function is in some other file
// int subtract(int, int); //  "      "    "       "       "   "   "  "subtract" "    "  "   "    "    "

void run();

int main(){
    run();
    return EXIT_SUCCESS;
}

/*
    mechanism :
            in main.cpp file when the run() function is encountered, the compiler knows that we have defined the function run() somewhere else in other file
            when it tries to execute in the run function in run.cpp file, it encounters two other functions add() and subtract()
            now because we have just declared and not defined those function in the same source file, the linker will try to seek for those function definitions in different source files
            and because we have already told the compiler that add() and subtract() are defined somewhere else by specifying a function prototype
            it will gurantee the compiler that these functions are defined in some other program file 
*/