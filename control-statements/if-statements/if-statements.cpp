#include <iostream>
#include <cstdlib>
#include <cstdint>
#include <string>
#include <string_view>
#include <cstdint>

/*
    Conditional statememnt : a conditional statement is a type of control flow statement which allows us to execute a bunch of statements only if a certain condition is met
    types : C++ supports two types of conditional statements : if statements and switch statements
*/


/*
    if-else statement is a conditional statement that helps us execute statement(s) if the condition specified in the if(condition) statement is specified

    type :
        if (condition)
            true_statement;
        else
            false_statement;

    mechanism :
        if the condition evaluated to true, true_statement executes
        otherwise, if conditional evaluates to false (and the corresponding else statement is also specified), false_statement is executed

    multiple-executive statements inside if-else statement:
        if we desire to execute multiple statements in an if or an else statement, we gotta put those statements all inside a block ("{...}")
        in the cases where if-else statement got single statements to execute, the compiler automatically puts block in the if-else executable statements
*/

namespace AGE_TOKENS {
    constexpr std::uint16_t minAgeOfSex{17};
}

int main(){
    int age{};
    std::cout << "enter your age : ";
    std::cin >> age;

    #if 0
    // learner preffered 
    if (age >= AGE_TOKENS::minAgeOfSex) {
        std::cout << "you can have sex, enjoy it nigga !\n";
    }else{
        std::cout << "you can not have sex, crazy nigga\n";
    }
    #endif

    #if 0
    // preffered for single statements inside if-else statements
    if (age>=AGE_TOKENS::minAgeOfSex)
        std::cout << "you can have sex, enjoy it nigga !\n";
    else 
        std::cout << "you can not have sex, crazy nigga\n";
    #endif

    #if 1
    // more preffered for single statement inside an if-else statement
    if (age>=AGE_TOKENS::minAgeOfSex)   std::cout << "you can have sex, enjoy it nigga !\n";
    else                                std::cout << "you can not have sex, crazy nigga !\n";
    #endif

    return EXIT_SUCCESS;
}