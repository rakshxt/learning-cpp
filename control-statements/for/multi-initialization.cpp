#include <iostream>
#include <cstdlib>

void run(){
    // best use case for multi-initialization inside for-loop
    for (int i{0}, j{9}; i<10 && j>=0; (++i, --j))
        std::cout << i << ", " << j << '\n';
}

int main(){
    run();
    return EXIT_SUCCESS;
}