// just a fun program
// works fine but the shit of power raising of 10 is making condition worse

// @deprecated

#include <iostream>
#include <cstdlib>
#include <cmath>

/*
     flux formula
        method 1 -> ∮dφ = ∮E.ds
        method 2 -> φ = q/ε         ε = 8.85 x 10^-12

    std::pow defined in the cmath library which takes two arguments(one the number to raise and another the number upto which we want it to raise)
*/

// electric field method
double method1()
{
    double electric_field{}, surface_area{}, angle{}, flux{0}, angle_in_radians{0};

    std::cout << "enter electric field and surface area and angle(in degree) : ";
    std::cin >> electric_field >> surface_area >> angle;

    angle_in_radians = angle * ((180 * 7) / 22);
    flux = electric_field * surface_area * cos(angle_in_radians);

    return flux;
}

// elecrtic charge method
double method2()
{
    double flux{0}, charge{};

    std::cout << "enter the charge enclosed by the surface : ";
    std::cin >> charge;

    flux = (charge) / 8.85 * std::pow(10, -12);

    return flux;
}

int main()
{

    double method{}, result{0};

    // asking user if he or she wants method 1 or 2
    std::cout << "-------------ELECTRIC FLUX CALCULATOR-------------\n"
              << "1. Electric field method\n2. Electric charge method\n"
              << "enter the method :";
    std::cin >> method;

    if (method == 1)
    {
        result = method1();
    }
    else if (method == 2)
    {
        result = method2();
    }
    else
    {
        std::cout << "fuck you" << std::endl;
        return EXIT_FAILURE;
    }
    std::cout << "\n\nresult :" << result << std::endl;

    // note that this shit program is not intended to be used/run as normal programs, beware of this shit
    return EXIT_FAILURE;
}