#include <iostream>

/**
 * Assignment is the process of giving a variable some "value" so that the value would be stored in the memory reigon of obj connected to that variable
 *
 * Initialization = (definition+Assignment) at the same time
 * initialization is the process of giving a variable some value instantly at the same statement line after its definition
 * the value given to the variable during initialization is called an initializer
 */

int main(){

    // default initialization -- no initializer -- discarded
    int x; // no value assigned

    // copy initialization -- use of "=" -- discarded
    int y = 2;

    // direct initlization -- use of () brackets and then adding initializer inside the "()"
    // this direct initlaization method is discarded because it is often confused with function
    // int x(); --> function
    // int x(1);--> initialization
    int z(0);

    /**
     * list initialization is the most used one method for initializing variables because of its benifits over other initialization methods
     * mainly the list initlaization method is used to initialize complex types(objects(class)) with an ease
     */

    // 1. direct list
    int l{12};
    // 2. copy list initlization
    int m = {13};
    // 3. value initialization
    int n{};

    std::cout << z; // returns 0;

    return 0;
}