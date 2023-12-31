#include <iostream>
#include <cstdlib>

#if !defined(PI)
    #define PI 3.1415  // scope starts from here
#endif

void call(void);
void compute();

int main(){
    call();
    compute();
    return EXIT_SUCCESS;
}

void call(void){
    #if 1
        #if !defined(RADIUS)        // scopes starts from the point of definition to the end of the file so main cannot use RADIUS
            #define RADIUS 10;
        #endif
    #endif
}

void compute(){
    std::cout << "radius : " << RADIUS;
}

// scope of PI and RADIUS ends here