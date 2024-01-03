#include <cstdlib>
#include <iostream>

// macros can be used as "named constant values"

#define kEarthGravity       9.8
#define kChargeOnElectron   1.6e-19
#define kPermitivitty       8.85e-12

int main(int argc, char const *argv[]){
    std::cout << "g(Earth) : " << kEarthGravity << '\n';
    std::cout << "charge on an electron : " << kChargeOnElectron << '\n';
    std::cout << "permitivitty of free space : " << kPermitivitty << std::endl;

    return 0;
}
