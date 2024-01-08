#ifndef CONSUMER__
    #define CONSUMER__
    #include <string>
    #include <string_view>
    #include <iostream>
    
    inline std::string getUsername(void){
        std::cout << "enter your legal name : ";
        std::string name{};
        std::getline(std::cin >> std::ws, name);
        return name;
    }

    const inline double kMONEY{500.0};
    inline int getOption(){
        int input{};
        std::cout << "Enter 1 to buy or 2 to get prices : ";
        std::cin >> input;
        return input;
    }

#endif