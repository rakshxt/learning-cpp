#include "./math.hxx"
// inline variable and function defined here as well
// since now, linker should throw an error for violating ODR rule, but since all variables and functions in "math.hxx" headers are defined as inline(which allows multiple definition), it is fine

double sphereVolume(){return (4.0*pi*getRadius()*getRadius())/3.0;}
// since the function is inline, the compiler may optimize "getRadius()*getRadius()" part as just "10*10"