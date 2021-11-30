#include <iostream>

int main( void )
{
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string &stringREF = string;

	std::cout << "[STR] address: " << &string << "\t value: " << string << std::endl;
	std::cout << "[PTR] address: " << stringPTR << "\t value: " << *stringPTR << std::endl;
	std::cout << "[REF] address: " << &stringREF << "\t value: " << stringREF << std::endl;
	return (0);
}