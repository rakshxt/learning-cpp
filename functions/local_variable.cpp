#include <iostream>
#include <cstdlib>

/*
    a local variable is that defined inside the body of a function. in addition to local variables, function parameter are also treated as local variables
    an object's lifetime is the time between its creation and destruction, starting in its creation and ending at its destruction

    local variables are created at their point of definition in the function and the parameters are created at the point the function is called/entered
    local variables are destroyed at the end of the function (at "}") while the functions parameter are also destroyed at the termination of the function

    An objects life time is a runtime property, means that the objects would be created and destroyed during runtime(time of execution of the program) and not in the compile time
*/

void fn()
{
    std::cout << "called function fn()\n";
    std::cout << "x is still alive here\n";
    std::cout << "terminating function fn()\n";
}

int main()
{

    std::cout << "running function main()\ncreated variable x\n";
    int x{0}; // creation of x, starting of the lifetime of x
    std::cout << "calling function fn()\n";
    fn(); // x is still alive here, as x will only be destructed at the end of its residing function "main"
    std::cout << "x is still alive here\n";
    std::cout << "terminating main(), x would now be destroyed" << std::endl;

    return EXIT_SUCCESS;
}