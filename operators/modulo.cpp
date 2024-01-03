#include <iostream>
#include <cstdlib>


/*
    the operator% is a binary oprator that returns the remainder of the division of its operaands
    ex:
        7/2 = 3 remainder 1. therefore, 7%2=1 as it gives the remainder of the division of 7 and 2
    
    NOTE :
        operator% only works if both of its operands are integers (they dont work when either is of any other type)

    NOTE :
        the sign of the remainder is same as that of the dividend (first operator)
        ex :
                -5%2 will yeild -1 not 1
*/

bool isOdd(int number){
    return !(number % 2 == 0);
    // complex statement, but get used to it nigga
}

int main(){
    std::cout << std::boolalpha 
              << isOdd(5) << '\n';
    std::cout << isOdd(-5) << '\n';
    
    return EXIT_SUCCESS;
}