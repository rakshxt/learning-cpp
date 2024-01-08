#include <iostream>
#include <cstdint>
#include <cstdlib>

void run(){
    std::int_fast8_t count='a'; //assuming ++code('a') = code('b')
    while(count <= 'z'){
        std::cout << count << ' ';
        if (count%6==0 || count=='z') std::cout << '\n';
        ++count;
    }
}

int main(){
    run();
    return EXIT_SUCCESS;
}