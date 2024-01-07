/*
    we can initialize a variable inside an if statement and then do conditional checking with that variable
    syntax:
        if (assignment; condition)
            true_statement
        else
            false_statement
*/

#include <iostream>
#include <cstdlib>
#include <cstdint>
#include <iomanip>
#include <string>
#include <string_view>


std::string getUserName(){
    std::string userName{};
    std::cout << "enter your username : ";
    std::getline(std::cin >> std::ws, userName);
    return userName;
}

std::uint16_t getUserAge(std::string_view username){
    std::int16_t age{};
    std::cout << "Hey, " << username << ", enter your age : ";
    std::cin >> age;
    return age;
}

void run(std::string_view username, std::int16_t age){
    // if age>=18 then spawn a dragon names "garrix"
    // else (age < 18), spawn a dog named "lirux"
    // this spawn(actually instantiation can be just done inside if statement)...
    if ( std::string_view dragon{"GARRIX"} ; age>=18){
        std::cout << dragon << " spawned, now you done nigga !\n";
        if (age > 30)   std::cout << "omg you killed " << dragon << '\n';
        else            std::cout << dragon << " killed you, lol!\n";
    }else{
        const std::string_view dog{"lirux"};
        std::cout << dog << " spawned, now you done little nigga !\n";
        if (age >= 13)   std::cout << "omg you killed " << dog << '\n';
        else            std::cout << dog << " killed you, lol!\n";
    }
}


int main(){

    const std::string username{getUserName()};  
    const std::uint16_t age{getUserAge(username)};
    
    run(username, age);

    return EXIT_SUCCESS;
}