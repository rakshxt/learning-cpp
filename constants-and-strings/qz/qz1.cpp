#include <iostream>
#include <string>
#include <string_view>
#include <cstdlib>
#include <cstdint>

std::string getUser(const int n){
    std::string name{};
    std::cout << "Enter the name of person #" << n << " : ";
    std::getline(std::cin >> std::ws, name);
    return name;
}

std::uint_fast16_t getAge(std::string_view name){
    std::uint_fast16_t age{};
    std::cout << "Enter the age of " << name << " : ";
    std::cin >> age;
    return age;
}

void getOlder(std::string_view u1, std::string_view u2, std::uint_fast16_t a1, std::uint_fast16_t a2){
    std::string_view greater{(a1>a2) ? u1 : u2}, smaller{(a1>a2) ? u2 : u1};
    std::cout << greater << " (age" << ((a1>a2) ? a1 : a2) << ") is greater than " << smaller << " (age " << ((a1>a2) ? a2 : a1) << ").\n";
}

int main(){
    std::string personOne{getUser(1)}; const std::uint_fast16_t personOneAge{getAge(personOne)};
    std::string personTwo{getUser(2)}; const std::uint_fast16_t personTwoAge{getAge(personTwo)};
    getOlder(personOne, personTwo, personOneAge, personTwoAge);
}