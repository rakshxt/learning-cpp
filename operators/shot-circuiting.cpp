/*  
    short circuiting is the process of "not evaluating" the right operand:
                in logical AND if left operand returns false
                in logical OR  if left operand returns true
    
    in this case, expresisons with side effects wont be executed if short-circuiting happens
*/

#include <cstdio>
#include <iostream>



int main(){
    std::int16_t i{}, j{};
    std::cin >> i >> j;

    // desired input to execute this statement (and the corresponding side-effect expression)
    if (i==0 && (++j)==(-1)) std::cout << "...\n";
    else                   std::cout << "\n";

    // if i!=0, ++j==-1 would never be evaluated
    std::cout << "i = " << i << "\tj = " << j << std::endl;

    return EXIT_SUCCESS;
}