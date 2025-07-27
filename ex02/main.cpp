#include <iostream>

int main() {
	std::string string =  "HI THIS IS BRAIN";
	std::string* stringPTR = &string;
	std::string& stringREF = string;
	std::cout << "Memory address string: " << &string << std::endl;
	std::cout << "Memory address stringPTR: " << stringPTR << std::endl;
	std::cout << "Memory address stringREF: " << &stringREF << std::endl;
	std::cout << "Value of string: " << string << std::endl;
	std::cout << "Value of stringPTR: " << *stringPTR << std::endl;
	std::cout << "Value of stringREF: " << stringREF << std::endl;
	return 0;
}