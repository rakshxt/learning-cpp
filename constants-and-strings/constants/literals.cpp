#include <iostream>
#include <cstdlib>
// #include <cstdint>
#include <iomanip>

/*
    literals are the values(constant values) directly inserted in the source code (mostly for initialization or assignment)
    type of a literal value :
            type of a literal value is similar to the type of the value of the literal 
            i.e.:
                integeral           int
                floating point      double (not float)
                boolean             bool
                charcater           char
                string              c-style string type
    in order to convert a literal type from one type to another, example double to float, so that right literal value would be assigned to right variable (withough implicit conversion),
    use suffixes after literals
            unsigned int                        u
            float                               f
            long int                            l/L
            unsigned long int                   uL/ul
            long double                         l/L
            unsigned long long int              ull/uLL
            signed std::size_t type             z
            unsigned std::size_t type           uz
            string                              s
*/

int main(int argc, char const *argv[]){
    float fl{12.2};     // narrowing conversion of double-type-literal to float-type-literal(thru implicit conversion)
                        // if treat-warnings as errors is enabled, compiler will throw an error
    // better
    float ffl {12.2f};  // explicit conversion of double-type-literal to floating-type-literal(thru explicit conversion)

    //also
    unsigned int ui{65000};
    // better
    unsigned int uui{65000u};

    return 0;
}

/*
    MAGIC NUMBERS :
            magic numbers or literals are those values (mostly integers) that have an unclear meaning or that does not convery a proper conext of their use
            example:
                int boeing_flight_length = {planeCapability * 102 };
                    here, the integer literal "102" is a magic number (whose meaning is not clearly conveyed)
                    if we gotta update this value, it would be hard to update this same value in different location, where it is used and may collide (change another) value of no intention
        // https://www.learncpp.com/cpp-tutorial/literals/      prefers naming litersla thru constant variables, so that they can convey a proper meaning and doesnt impede us to refine our code
*/
