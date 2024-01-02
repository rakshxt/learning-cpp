#include <iostream>
#include <cstdlib>
#include <ios>
#include <limits>
#include <climits>


// we can flush the input buffer by the following statement
// std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');


int main(){
    char input{}, atBuffer{};
    std::cin >> input;
    std::cout << "entered : " << input << '\n';

    std::cin >> atBuffer;
    std::cout << "from buffer : " << atBuffer << '\n';

    std::cout << "clearing buffer...";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout << "done..\nenter a new character : ";
    std::cin >> atBuffer;
    std::cout << "after clearance : " << atBuffer << std::endl;

    return EXIT_SUCCESS;
}