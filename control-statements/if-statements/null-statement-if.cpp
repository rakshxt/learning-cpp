#include <iostream>
#include <cstdlib>
#include <string>
#include <string_view>




/*
    a null statement is the one that only contains a ";"(semi-colon)
    it basically represents NOTHIN.

    null statements are used in the place where the language requires a statement to exist but we dont want to add any statement
    example:
            if (conditon)  
                ;
            else
                // something to perform
*/

// sample program
int main(){
    
    // if the name inputted is a bad word, then do something else dont do anything
    std::string word{};
    std::getline(std::cin >> std::ws, word);

    // perfect use of initialization inside a string
    if (const std::string_view nameSV{word};
            word=="bullshit" || word=="fucker" || word=="shit" || word=="fuckshit"){
                std::cout << "no in-appropiate words please, nigga!\n";
    }else
        ;   // null statement to do nothing

    return EXIT_SUCCESS;
}