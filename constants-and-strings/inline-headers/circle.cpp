#include "./math.hxx"
// inline variable and function defined here 

#include <iostream>

double sphereVolume();

int main(int argc, char const *argv[]){
    std::cout << "Π : " << ::pi << '\n';
    std::cout << "volume of sphere with radius " << getRadius() << " = " << sphereVolume() << std::endl;
    return 0;
}
