#include <iostream>
#include <string_view>
#include <string>
#include <cstdlib>

/*
    more of std::string_view ::
        std::string_view just creates a view of the string while std::string creates a copy of the string to be independent of the the initializer
        while std::string_view is dependent on the initializer... any change on the initializer will "invalidate" the string_view and using the string_view then would show undefined behaviour
*/

int main(){
    using namespace std::string_literals;
    using namespace std::string_view_literals;

    std::string name{"rakshxt"s};
    std::string_view nameSV{name};  // viewing "name"
    std::cout << "name : " << nameSV << '\n';
    name = "lemon";                 // this re-assignment of the owner invalidated all the view to this
                                    // in this case, it invalidated the string_view nameSV, leaving it dangling
    std::cout << "name : " << nameSV << '\n';   // undefined behaviour
    // re-validation of invalidated view
    nameSV=name;                    // string_view nameSV is now again viewing string name
    std::cout << "name : " << nameSV << '\n';   // undefined behaviour

    return EXIT_SUCCESS;
}