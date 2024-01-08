#include <iostream>
#include <cstdlib>
#include <string>
#include <string_view>

#include "./headers/consumer.hxx"
#include "./headers/shop.hxx"


int main(){
    again:
        const std::string username{::getUsername()};
        double kMoneyLeft{::kMONEY};
        std::cout << username << " got " << ::kMONEY << "$\n";
        provideLiquorList();

        std::string liquorChoosen{};
        rerun:
            if (::getOption()==2){
                ::getPrices();
                goto rerun;
            }
            else{
                std::cout << "enter your choice : ";
                std::getline(std::cin >> std::ws, liquorChoosen);
                kMoneyLeft = ::buy(liquorChoosen);
            }
            std::cout << "got 1 " << liquorChoosen << "\nleft with : " << kMoneyLeft << "$\n";

        // TODO: more modifications in future
        goto again;
        return EXIT_SUCCESS;
}