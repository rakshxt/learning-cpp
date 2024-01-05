#include <iostream>
#include <cstdlib>
#include <cstdint>

/*
    uses :
        1. Inline Expansion (retarded)
        2. Multiple Definition


            INLINE EXPANSION :
                    inline expresison is the process of replacing a function's call with the code defined inside the called function's body
                    this this done in order to reduce the work of cpu and boost up performance( significantly or insignificantly )
                MECHANISM:
                        when a function is specified with 'inline' keyword, it will hint the compiler that this function is benificial for inline expansion
                        in this way the code of function would be replaced to its equivalent function call and hence the cpu would have to do less work nowonwards
                    PROS:
                        can boost performance by removing performance overhead (excess time taken for execution)
                        can also help the compiler optimize the function code better
                    CONS:
                        if function has more instructions (hence it may be difficult to replace the function call with equivalent code), each inline function increase the size of executable
                        when a function is marked with 'inline' keyword, its all upto compiler whether inline expansion should be done or not in this function


            MULTIPLE DEFINITION :
                    suppose we want to directly define a function in a header file so that every time it is used in multiple files, we dont need to define it again and again
                    but wait, if the header file was included in multiple files of the same program, won't will it violate the ODR (ONE DEFINITION RULE) rule.
                    to prevent from this, we use the "inline" keyword, which means that the function can have multiple definitions
                    this way we can mark the functions defined in the header file as inline and define it once and use it in multiple files without re-defining them again and again
*/

/*
    though it should be avoided because most mordern compilers are smart enough to determine the benificiality of defining a function inline
    one case of "inline" function is when the function is small and is called many times
    like ::
*/
inline int get5() { return 5; }

inline int max(int x, int y) { return ((x > y) ? x : y); }

int main(int argc, char const *argv[]){
    std::cout << get5() << '\n'; // this would be replaced by the compiler as get5()--->5
    // equivalent compiler optimization :
    // std::cout << 5 << '\n';

    std::cout << "5 + 5 = " << get5() + get5() << std::endl;
    // equivalent compiler optimization
    // std::cout << "5 + 5 = " << 5 << std::endl;

    std::cout << max(10, 20) << '\n';
    // equivalent function expansion (inline expansion preferably)
    // std::cout << ((10 > 20) ? 10 : 20) << '\n';

    std::cout << max(10, 7) << std::endl;
    // equivalent function expansion (inline expansion preferably)
    // std::cout << ((10 > 7) ? 10 : 7) << '\n';

    // since ((10 > 7) ? 10 : 7) is a compile-time expression (constant expression), compiler will optimize this to
    // std::cout << 10 << '\n';

    return 0;
}
