// implementing the rule : functions that share same identifier but different number(s) of parameters are valid and hence doesnt produce any compilation error

#include <iostream>
#include <cstdlib>

int add(int, int);
int add(int, int, int);
int add(int, int, int, int);
int getOption(void);
void run(void);

void run(){
    int n{getOption()};
    if (n==1){
        [[__attribute_maybe_unused__]] unsigned int x{}, y{};  // experiment
        signed int x{}, y{};
        std::cout << "enter the numbers : ";
        std::cin >> x >> y;
        std::cout << x << " + " << y << " = " << (x+y) << std::endl;
        return; // immediately halt the function execution
    }else if(n==2){
        int x{}, y{}, z{};
        std::cout << "enter the numbers : ";
        std::cin >> x >> y >> z;
        std::cout << x << " + " << y << " + " << z << " = " << (x+y+z) << std::endl;
        return;
    }else if(n==3){
        int x{}, y{}, z{}, l{};
        std::cout << "enter the numbers : ";
        std::cin >> x >> y >> z >> l;
        std::cout << x << " + " << y << " + " << z << " + " << l << " = " << (x+y+z+l) << std::endl;
        return;
    }else{
        std::cout << "fuck you " << n << " times" << std::endl;
        return;
    }
}

int main(){
    run();
    return EXIT_SUCCESS;
}

int add(int x, int y){return x+y;}

int add(int x, int y, int z){return x+y+z;}

int add(int x, int y, int z, int theta){return x+y+z+theta;}

int getOption(){
    int input{};
    std::cout << "------------------ADD------------------\n"
              << "1. 2 numbers\n2. 3 numbers\n3. 4 numbers\n";
    std::cout << "enter your option : ";
    std::cin >> input;
    return input;
}