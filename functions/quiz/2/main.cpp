#include "./headers/io.hpp"
// should have included iostream but (for a puspose of experiment) we are not
// + no use of std::cout or std::cin here
#include <cstdlib>

int main(){
    int x{::readNumber()}, y{::readNumber()};
    ::writeAnswer(x+y);
    // statements to keep the console open
    std::cin.get();
    std::cin.get();
    return EXIT_SUCCESS;
}
