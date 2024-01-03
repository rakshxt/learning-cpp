#include <iostream>
#include <cstdlib>

/*
    comma "operator" (not "separater"): can be used to execute two expressions in the case where only one expresison is allowed (ex: printing)
                format:
                    (expr1, expr2)
                mechanism:
                    evaluates expr1 first then expr2 then returns the value of expr2 evaluated.
*/

int main(){

    int x{}, y{};
    std::cout << "x : " << x << "\vy : " << y << '\n';
    std::cout << "(++x, ++y) : " << static_cast<char>(++x, ++y) << std::endl;   // evaluates ++x first, then ++y and then returns the value returned by (++y)
    std::cout << "x : " << x << "\vy : " << y << '\n';
    (++x, ++y);                                                                 // value of y is discarded this time as it is returned but not used nigga
    std::cout << "x : " << x << "\vy : " << y << '\n';
    return EXIT_SUCCESS;
}