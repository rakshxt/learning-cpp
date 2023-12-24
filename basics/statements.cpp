#include <iostream>

/**
 * a program is a computer utility that tells the computer to do something
 * a statament is a part of program and is basically an "instruction" given to the computer in order to perform something
 * a set of statements grouped in a single unit is called as function
 *
 * functions are basically a block of statements(can also be called as code) that we can call anytime to perform the desired thing to be done by the function
 *
 */

int addNumbers(); // a function to calculate two or more numbers;
                  // -- group of stataments

// the most important function in a .cpp file is the main function. Execution of every .cpp program starts from the main function
// we provide statements to be executed in the main function
int main(){

    std::cout << "..\n";         // statement -- telling the computer to print ".." in the console screen
    int x{};                     // initialization statement -- telling the computer to allocate a memory region for a variable named "x" and assign value 0
    std::cout << x << std::endl; // statement -- telling te computer to print the value in "x"(0) and then flush the buffer and add newline using std::endl

    return 0;
}