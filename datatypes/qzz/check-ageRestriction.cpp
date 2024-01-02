#include <iostream>
#include <cstdint>
#include <cstdlib>

// MORE WORK UPON THIS SHIT

std::uint_fast16_t getAge(void);
bool isAllowed(std::uint_fast16_t);
void showAllowance(bool, bool);


int main(){
    std::uint_fast16_t age{getAge()};
    if (age == unsigned(-1))    // wrap around functionality (if -ve number inputted)
        showAllowance(false, true);
    else
        showAllowance(isAllowed(age), false);
    
    return EXIT_SUCCESS;
}


bool isAllowed(std::uint_fast16_t age){return (age >= 18);}

void showAllowance(bool isAllowed, bool tokenDefined){
    if (tokenDefined){
        std::cout << "fuck up nigga !!" << std::endl;
        return ;
    }else{
        if (isAllowed)
            std::cout << "you are allowed for this shit , nigga, congrats!!" << std::endl;
        else
            std::cout << "you are not allowed kid, go drink ur momma's milkies UwU" << std::endl;
    }

}


std::uint_fast16_t getAge(){
    std::int_fast16_t age{};
    std::cout << "enter your age : " ;
    std::cin >> age;

    if (age < 0 || age > 100)
        return -1;  // wrap around functionality will happen

    std::uint_fast16_t u_age = age;
    return u_age;
}