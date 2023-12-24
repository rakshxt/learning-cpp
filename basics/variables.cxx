// program to illustrate declaration and assignment of variable

#include <iostream>

int main(){

    // "defining" a variable named "radius" of "int" type
    int radius;
    radius = 3;          // assignment (giving of value) to the variable is done with the help of assignment operator (=)
    std::cout << radius; // prints 3

    /**
     * mechanism :: we defined a variable (int) named radius
     *              on the next line we gave a value(integer) 3 to the variable "radius"
     *              we then pass the variable to the std::cout function of the iostream library
     *              when we call the "radius" variable in std::cout, the program refers to the value stored in the memory location that was assigned to the variable
     */

    radius = 10;
    std::cout << radius; // prints 10

    /**
     * mechanism :: after firstly the radius(3) was printed we changed the value stored in the memory region of radius to 10
     *              this overwrites the previously stored value in the memory (i.e 3) with new assigned value (i.e. 10)
     *              then prints the current value that the memory location for variable "radius" holds (10)
     */

    // otpt: 310(because we didnt provide "\n" in the std::cout statement)
    return 0; // everythng ok
}