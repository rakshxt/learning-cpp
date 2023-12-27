#include <iostream>

/**
 * literals are basically the fixed values that we can directly use in the source code/program
 * literals are constant values that are "directly" executed in the executable program, they are not stored anywhere unless stored in a variable
 *
 * we store "literals" in the variables, and whenever a literal is used inside a variable,
 * the compiler "copies" that literal to the memory location of the varibale
 * whenever the variable is reffered/referenced, the compiler will fetch the literal value stored in the variable
 *
 *
 * literal values are stored directly into the executable and hence these values can be accessed directly
 * on the other hand values of a variables are stored in memories and hence the compiler gotta "fetch" those values from the desired memory locations
 */

int main()
{

	std::cout << 10 << std::endl; // directly stored in the executable
	int x{10};					  // assigned a memory location for variable "x" --> copied the literal value "10" and then stored in the memory location of "x"
	std::cout << x << std::endl;  // fetch the value in the memory location of the varibale "x"

	return 0;
}
