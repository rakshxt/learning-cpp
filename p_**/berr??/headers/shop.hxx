#ifndef SHOP__
    #define SHOP__
    #include <iostream>
    #include <string_view>
    namespace liquors{
        const std::string_view vodka{"vodka"};
        const std::string_view beer{"beer"};
        const std::string_view weed{"weed"};
        const std::string_view marijuana{"marijuana"};

        const double costVodka{110.12};
        const double costBeer{89.12};
        const double costWeed{120.0};
        const double costMarijuana{220.58};
    }
    const inline double vodka{110.5};   //$
    inline void provideLiquorList(){
        std::cout << "-----------------------------------------------\vMEXI-CO\v-----------------------------------------------\n"
                  << "Available stocks: " << liquors::vodka << ", " << liquors::beer << ", " << liquors::weed << ", " << liquors::marijuana << '\n';
    }
    inline void getPrices(){
        std::cout << liquors::vodka << " = " << liquors::costVodka << "$\n"  
                  << liquors::beer << " = " << liquors::costBeer << "$\n"
                  << liquors::weed << " = " << liquors::costWeed << "$\n"
                  << liquors::marijuana << " = " << liquors::costMarijuana << "$\n";
    }

    #include "./consumer.hxx"
    double buy(std::string_view item){
        if      (item==liquors::beer)       return kMONEY-liquors::costBeer;
        else if (item==liquors::vodka)      return kMONEY-liquors::costVodka;
        else if (item==liquors::weed)       return kMONEY-liquors::costWeed;
        else if (item==liquors::marijuana)  return kMONEY-liquors::costMarijuana;
        return 0.0;
    }

#endif