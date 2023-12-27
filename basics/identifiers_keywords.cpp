// #include <iostream>  // we dont want to use the std::cout or std::cin functionality

int main()
{

    // all the following variables are "different" as because c++ is case sensitive(distinguishes between lower and upper case characters/words)
    [[maybe_unused]] int value; // conventional
    [[maybe_unused]] int Value; // un-conventional
    [[maybe_unused]] int VALUE; // un-conventional
    [[maybe_unused]] int vAlue; // un-conventional

    // trivial (less importance) variables identifiers should be short and doesnt need to make any meaning
    [[maybe_unused]] int i; // conventional for trivial use, like to use inside a loop
                            // NOTE - defining what the variable would be used for would be a good procedure to be done anyways

    // variables used in many parts of the programs should be named in a way that they makes sense what they are going to do
    [[maybe_unused]] int addNumbers; // conventional identifier for important variables else too ambigious/useful for trivial ones

    return 0;
}

// functions naming convention -- camelCase/intercapped
int myFunction(); // unconventional, doesnt tell what the function does or why does it does what it is designed to
int addNumbers(); // conventional, gives a description of the working of the function

// functions naming convention -- snake_case/underscores
int my_function(); // unconventional, doesnt tell what the function does or why does it does what it is designed to
int add_numbers(); // conventional

int doSomething();
int __sayHello(); // unconventional -- identifiers shouldnt be started from "_" (underscores) as such identifiers are preserved for os, library or compiler usage
