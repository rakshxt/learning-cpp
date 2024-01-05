#include <iostream>
#include <cstdlib>
#include <cstdint>
#include <bitset>
#include <iomanip>
#include <ios>
#include <limits>

#include "./decimal-to-binary-converter.hxx"


void flushInputBuffer(void){ std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); }


std::int_fast8_t oneByteUserInput(void){
    std::int_fast8_t uI{};
    std::cout << "enter the character : ";
    std::cin >> uI;
    ::flushInputBuffer();

    return uI;
}

std::int16_t twoBytesUserInput(void){
    std::int16_t uI{};
    std::cout << "enter an integer : ";
    std::cin >> uI;
    return uI;
}

std::int_fast64_t fastEightBytesUserInput(void){
    std::int_fast64_t uI{};
    std::cout << "enter an eight bytes long integer : ";
    std::cin >> uI;

    return uI;
}


std::bitset<8> convertOneByte(std::int_fast8_t uI){
    const std::bitset<8> bRepresentation{std::bitset<8>{static_cast<long long unsigned int>(uI)}};
    std::cout << "binary representation of " << uI << " : " << bRepresentation << std::endl;
    return bRepresentation;
}

std::bitset<16> convertTwoByte(std::int16_t uI){
    const std::bitset<16> bRepresentation{std::bitset<16>{static_cast<long long unsigned int>(uI)}};
    std::cout << "binary representation of " << uI << " : " << bRepresentation << std::endl;
    return bRepresentation;
}

std::bitset<64> converteFastEightBytes(std::int_fast64_t uI){
    const std::bitset<64> bRepresentation{std::bitset<64>{static_cast<long long unsigned int> (uI)}};
    std::cout << "binary representation of " << uI << " : " << bRepresentation << std::endl;
    return bRepresentation;
}

int main(int argc, char const *argv[]){
    run(getUserInput());
}

void run(std::int_fast8_t choice){
    if (choice=='1'){
        const std::int_fast8_t n{oneByteUserInput()};
        convertOneByte(n);
    }else if(choice=='2'){
        const std::int16_t n{twoBytesUserInput()};
        convertTwoByte(n);
    }else{
        const std::int_fast64_t n{fastEightBytesUserInput()};
        converteFastEightBytes(n);
    }
}

std::int_fast8_t getUserInput(void){
    std::cout << "--------------------------------------------\vDECIMAL TO BINARY CONVERTER\v--------------------------------------------\n"
              << "1. CHARACTER(INTEGRAL CHARACTER) TO BINARY\n"
              << "2. 4-BYTES INTEGER TO BINARY\n"
              << "3. 8-BYTES LONG INTEGER TO BINARY\n";
    std::cout << "enter your choice : ";
    std::int_fast8_t input{};
    std::cin >> input;
    if (input=='1' || input=='2' || input=='3'){
        flushInputBuffer();
        return input;
    }
    else{
        std::cout << "teri maa ki chut, lwde!" << std::endl;
        std::exit(EXIT_FAILURE);
    }
}