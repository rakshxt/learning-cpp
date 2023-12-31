#include "info.hpp"
#include <iostream>

#ifndef NAME 
    #define NAME    "rakshxt"
    #define AGE     17
    #define OS      "debian"
#endif

void info(){
    std::cout << "name : " << NAME << "\nage : " << AGE << "\nOS : " << OS << std::endl;
}