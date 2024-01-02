#include <iostream>
#include <cstdlib>
#include <cstdint>


/*
    character datatype (INTEGRAL CHARACTER)
        a character datatype helps us to store a character in a variable
        A character is a single letter, symbol, number, whitespace, etc
    character datatype is an integral type, meaning that the values assigned/intialized to character variables are stored in the form of integers like booleans
    hence, charcater datatype is an integral type

    std::cout always prints the character varaiables in the console in the form of ASCII CHARACTERS, even in the times when variables are assigned/initialized withing an integer 

    NOTE:   
        the literals(character literals specifically) stored inside a character variable is quoted in single quotes 
        ex: 'a',  '1', 'b'

    ASCII (AMERICAN STANDARD CODE FOR INFORMATION INTERCHANGE)
        Gives a way of representing ENGLISH CHARACTERS in integers (from 0--->127)
        ex :
            97 represents the english letter 'a'
            65 represents the english letter 'A'
*/


int main(){

    char ch1{'a'}, ch2{97}, comma{44};  // 97 is ascii code for ascii character 'a'
                                        // 44 for a comma ','
    std::cout << ch1 << comma << ch2;
        // std::cout << '\a';


    return EXIT_SUCCESS;
}