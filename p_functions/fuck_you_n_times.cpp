#include <iostream>
#include <cstdlib>

int getInput(){
    int n{};    // trivial variable
    std::cout << "on a scale of 1-10 how smart are you : ";
    std::cin >> n;
    return n;
}

int main(){

    int input{getInput()};

    /*
        side effect of using the below statement :
                first the (std::cout << "fuck you ") part would be executed and then after printing that information in the console the "<<" operator will return the std::cout 
                after that when the ahead statement would be starting to be executed the compiler will recognise that the getInput() is a function call 
                hence the main function will be paused and the getInput function would be run
                after the execution of the getInput function a value(input value from the keyboard would be returned) which will now be sent to the output console by std::cout
                after that, the "<<"(insertion operator) will again return the std::cout and the ahead information would be executed

        this statement is redundant and doesnt produce the expected results:
            std::cout << "fuck you " << getInput() << " times ugly nigga!" << std::endl;

    */
   
    std::cout << "fuck you " << input << " times ugly nigga!" << std::endl;


    return EXIT_SUCCESS;
}