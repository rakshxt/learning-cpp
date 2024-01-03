#include <iostream>
#include <cstdlib>
#include <cstdint>

/*
    Constant values are those that are not re-assignable after initialization
    named constant values:
            constant variables:
                    values with identifiers, which can not be changed during execution after initialization    
                other than that, constant variables are same like other variables, except that their value cannot be changed
*/

// function parameters can also be made as const
[[__attribute_maybe_unused__]] void fn(const int someval){}

// function's return value can also be made const
// though for fundamental types, compiler ignores this shit
// but this shit is still used in some important cases..
[[__attribute_maybe_unused__]] const int krm(const int someval){return -1;}

int main(){

    const double g{9.8};
    // g=10;            --> error, cannot re-assign
    std::cout << "g : " << g << '\n';

    //naming style
    [[__attribute_maybe_unused__]] const double EARTH_GRAVITY{9.8};    // c style
    [[__attribute_maybe_unused__]] const double kEarthGravity{9.8};    // cpp style
    [[__attribute_maybe_unused__]] const double earthgravity{9.8};     // as reffered by https://www.learncpp.com

    return EXIT_SUCCESS;
}