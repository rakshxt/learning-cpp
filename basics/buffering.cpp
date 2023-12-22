#include <iostream>

/**
 * Whenever we provide some output to be displayed in the std::cout functionality of iostream library
 * the output is not direclty put into the console
 * rather the output gets in line to be displayed in a temporary memory location called buffer
 * 
 * a buffer is a temporary memory location where the moving data is temporarily kept before transferring it to the desired location
 * in our case the desired location is the console
 * 
 * also, flushing a buffer means to send all the queue outputs into the console
 * std::endl functionality adds a newline and also flushes the buffer (in-necessarily)
*/

int main(){

    std::cout << "xyz"; // first output to be stored in the buffer
    std::cout << std::endl << "xyz" << std::endl;

    // rather than std::endl, we should promote using '\n' (newline character) which adds a newline and doesnt flush the buffer region

    std::cout << "xyz\n";
    std::cout << "xyz\n";

    return 0;
}