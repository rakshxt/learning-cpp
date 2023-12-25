#include <iostream>

/*
    demonstration of function calling function calling function......

    NOTE : we cannot create nested functions, they are not defined in c++ syntax
*/

// function to print age to the console
void printAge(){
    std::cout << "age : 17" << std::endl;
}

// function to print name to the console
void printName(){
    std::cout << "name : rakshxt" << std::endl;
}

// function that calls printName() and printAge()
void printBio(){
    printName();
    printAge();
}

int main(){
    printBio();
    return 0;
}