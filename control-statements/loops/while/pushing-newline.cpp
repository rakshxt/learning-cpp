// trick demonstration for every newline after 3 or 2 or 10 or any number of lines
// basically if (line%line_to_newline==0)--> then produce newline
#include <iostream>
#include <cstdlib>

void run(){
    int count{1};
    while(count <= 20){
        if (count<10)   std::cout << '0';
        std::cout << count << ' ';
        if (count%5==0){ // '\n' for every 5th line
            std::cout << '\n';
        }
        ++count;
    }
}

int main(){
    run();
    return EXIT_SUCCESS;
}