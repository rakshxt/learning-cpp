#include <iostream>
#include <bitset>
#include <cstdint>
#include <cstdlib>


/*
    no built in functionality to represent binaries 
    though, hexadecimal representation and std::bitset can be used to set and represent hexadecimals/numbers in binaries
    also, C++14 introduced binary literal representation with the prefix 0b
*/

int main(int argc, char const *argv[]){

    // preferable -- 0b over std::bitset or 0x ((for binary literals))
    int bi1{0b0001};                    // binary representation for 1
    int bi2{0b0000'0000'0000'0010};     // binary representation for 2
    int bi3{0b0000'0000'0000'0011};     // binary representation for 3
    std::cout << bi1 << '\n'
              << bi2 << '\n'
              << bi3 << '\n';


    //0x representation
    [[maybe_unused]] int hb1{0x0001};         // 0000 0000 0000 0001  1 in the last bit in last pos
    [[maybe_unused]] int hb2{0x0002};         // 0000 0000 0000 0010  1 in last bit in 2 last pos
    [[maybe_unused]] int hb3{0x0004};         // 0000 0000 0000 0100  1 in last bit in 3 last pos
    [[maybe_unused]] int hb4{0x0008};         // 0000 0000 0000 1000  1 in last bit in 1'st pos
    [[maybe_unused]] int hb5{0x4011};         // 0100 0000 0001 0001  1 in 2 bit of first byte and 1 in last bit of both 3rd and 4th byte

    std::bitset<16> bitset32BytesVaribale{0b0000'0000'0000'0011};   // 3
    std::cout << bitset32BytesVaribale << '\n';                     // now console will print this variable's shit in binary format
    
    std::bitset<16> asciiCHAR_REP_A{65};    // ascii char representation code for 'A'
    std::cout << asciiCHAR_REP_A << '\n';   // prints the alternative binary format for 'A'
    // std::cout << static_cast<int>(asciiCHAR_REP_A) << std::endl; --> once a std::bitset is always a std::bitset

    return 0;
}
