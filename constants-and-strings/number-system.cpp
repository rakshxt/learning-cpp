#include <cstdlib>
#include <iostream>
#include <cstdint>

// https://www.learncpp.com/cpp-tutorial/numeral-systems-decimal-binary-hexadecimal-and-octal/


int main(int argc, char const *argv[]){

    //decimal 
    int id{10};     // normal decimal number system value implementation
    int io{012};    // octal  decimal number system value implementation by specifying 0  before the octal       value
    int ihd{0xA};   // hexa   decimal number system value implementation by specifying 0x before the hexadecimal value

    // by default, all the values would be shown in decimal number system representation..
    std::cout << io << '\n';    // -- 10

    // hex, dec & oct numeral system value representation in the console using std io manipulators
    std::cout << std::dec << ihd << '\n';
    std::cout << std::hex << 12  << '\n';
    std::cout << std::oct << 8   << '\n';   // 10

    return 0;
}
