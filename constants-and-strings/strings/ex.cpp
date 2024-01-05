#include <iostream>
#include <string>
#include <cstdint>
#include <cstdlib>


int main(int argc, char const *argv[]){

    std::string name{}; int age{};
    std::cout << "Enter your full name : ";
    std::getline(std::cin>>std::ws, name);
    std::cout << "Enter your age : ";
    std::cin >> age;

    std::cout << "Your age + length of name is : " << (
            age + (static_cast<std::uint_fast8_t>(name.length()))
        )
            << std::endl;

    return EXIT_SUCCESS;
}
