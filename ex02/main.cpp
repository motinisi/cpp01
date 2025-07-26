#include <iostream>

int main() {
	std::string string =  "HI THIS IS BRAIN";
	std::string* stringPTR = &string;
	std::string& stringREF = string;
	std::cout << "Memory addres string: " << &string << std::endl;
	std::cout << "Memory addres stringPTR: " << stringPTR << std::endl;
	std::cout << "Memory addres stringREF: " << &stringREF << std::endl;
	std::cout << "Value of string: " << string << std::endl;
	std::cout << "Value of stringPTR: " << *stringPTR << std::endl;
	std::cout << "Value of stringREF: " << stringREF << std::endl;
	return 0;
}