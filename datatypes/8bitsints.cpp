#include <iostream>
#include <cstdlib>
#include <cstdint>


int main(){

    std::int8_t ch1{};              // will act like signed char in many implementations
    std::uint8_t ch2{65};             // will act like unsigned char in many implementations

    std::cout << ch2 << std::endl;  // prints 'A' rather than 65, because complier treats uint8_t like unsigned char and if it is treated like char, std::cout will produce the character alternative 
    std::cout << "integer corresponding : " << static_cast <int> (ch2) << std::endl;    // forces to treat value inside int8_t as int

    std::cout << "enter a number : ";
    // takes character input and not whole integer
    std::cin >> ch1;
    std::cout << "entered : " << ch1 << std::endl;

    return EXIT_SUCCESS;
}