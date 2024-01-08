//TODO: repair this shit, and remove from operators directory, rather make a new directory for my-own-defined headers

#ifndef INT_POW_OWN
    #define INT_POW_OWN
    #include <cstdint>

    std::int_fast64_t powInt(std::int_fast64_t ft_base , std::int_fast64_t ft_exp){
        if (ft_exp==0){
            return 1;
        }else if (ft_exp==1){
            return ft_base;
        }else{
            if (ft_exp > 0){
                std::int_fast64_t temp{ft_base};
                for (int i=1; i<ft_exp ; i++){
                    ft_base *= temp;
                }
            }else{
                // further-modification
            }
        }
        return ft_base;
    }

    long double powDouble(long double ldbase, long double ldexp){
        std::int_fast64_t temp{ldbase};
        if (ldexp==0){
            return 1;
        }else if (ldexp==1){
            return ldbase;
        }else{
            if (ldexp > 0){
                for (int i=1; i<ldexp ; i++){
                    ldbase *= temp;
                }
            }else{
                for (int i=1; i<(-ldexp) ; i++){
                    ldbase *= temp;
                }
                ldbase=1.0/ldbase;
            }
        }
        return ldbase;
    }

#endif