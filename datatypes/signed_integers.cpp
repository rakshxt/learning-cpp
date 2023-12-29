#include <iostream>
#include <cstdlib>
// #include <iomanip>

/*
    integers are those literal values that contains +ve and -ve whole numbers (including 0)
    in c++, all the integers are signed by default, means that the "sign" of the number is stored as the part of the number

    sign bit               :   stores the sign of the integer (ex: +, -)
    unsigned or magnitude  :   stores the magnitude of the integer (ex: 12, 17887, 0)

*/

int main(){

    [[maybe_unused]] int i;
    [[maybe_unused]] short s;
    [[maybe_unused]] long l;
    [[maybe_unused]] long long l;

    // redundant (as by default all the integers are signed)
    [[maybe_unused]] signed short ss;
    [[maybe_unused]] signed int si;
    [[maybe_unused]] signed long sl;
    [[maybe_unused]] signed long long sll;

    // un-advisory (we can use int prefix but it is not advisory)
    [[maybe_unused]] short int shrti;
    [[maybe_unused]] long int li;
    [[maybe_unused]] long long int lli;

    return EXIT_SUCCESS;
}