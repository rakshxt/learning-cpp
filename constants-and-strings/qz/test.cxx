#include <iostream>
#include <string>
#include <string_view>

std::string getFullName(bool isFirstPerson)
{
	std::string_view personNumber {isFirstPerson ? "#1" : "#2"};

    std::cout << personNumber<< std::endl;
	std::cout << "\nEnter the name for person " << personNumber << " : ";
	// std::string personName{};
	// std::getline(std::cin >> std::ws, personName);

	return "a";
}

int main(int argc, char const *argv[])
{
    getFullName(0);
    return 0;
}
