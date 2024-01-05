#ifndef CONVERTER
    #define CONVERTER
    #include <bitset>
    #include <cstdint>

    std::int_fast8_t    oneByteUserInput(void);
    std::int16_t        twoBytesUserInput(void);
    std::int_fast64_t   fastEightBytesUserInput(void);

    std::bitset<8>      convertOneByte(std::int_fast8_t);
    std::bitset<16>     convertTwoByte(std::int16_t);
    std::bitset<64>     converteFastEightBytes(std::int_fast64_t);

    void                flushInputBuffer();
    std::int_fast8_t    getUserInput();
    void                run(std::int_fast8_t);

#endif