#include <iostream>
#include <cstdlib>

// good use of nested for-statements
void run(int start, int end){
    for (int i{start}; i<=end; ++i){
        std::cout << "table for " << i << " : \n";
        for (int j{1}; j<=10; ++j)
            std::cout << '\t' << i << 'x' << j << '=' << i*j << '\n';
        std::cout << "\n";
    }
}

int main(){
    run(13, 19);
    return EXIT_SUCCESS;
}