#include <iostream>
#include <cstdlib>

#ifndef g
    #define g 9.8
#endif

void getAboveHeight(double, double);
double getTowerHeight(void);

int main(){
    double height{getTowerHeight()};
    getAboveHeight(height, 0);
    getAboveHeight(height, 1);
    getAboveHeight(height, 2);
    getAboveHeight(height, 3);
    getAboveHeight(height, 4);
    getAboveHeight(height, 5);

    return EXIT_SUCCESS;
}

double getTowerHeight(){
    double height{};
    std::cout << "Enter the height of the tower in meters : ";
    std::cin >> height;
    return height;
}

void getAboveHeight(double height, double time){
    double heightAboveGround{height - ((1.0/2.0) * g * time*time)};
    if (heightAboveGround>0.000000)
        std::cout << "At " << time << " seconds, the ball is at height : "
                  << heightAboveGround << " meters" << std::endl;
    else
        std::cout << "At " << time << " seconds, the ball is on the ground." << std::endl;
}