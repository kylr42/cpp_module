//
// Created by user on 11.12.2021.
//

#include "Converter.hpp"

Converter::Converter(const char *arg) {
	_arg = arg;
}

Converter::Converter(const Converter &src) {
	_arg = src._arg;
}

Converter &Converter::operator=(const Converter &rhs) {
	_arg = rhs._arg;
	return *this;
}

Converter::~Converter() {
	NULL;
}
#include <cstdlib>
#include <cstring>
#define GREEN "\033[32m"
#define RED "\033[31m"
#define END "\033[0m"

int Converter::toInt() {

	int i = atoi(_arg);
	std::cout << "Int: " << i << std::endl;

	if (!i && *_arg != '0' && strlen(_arg) < 2)
		std::cout << "Int: " << (int) *_arg << std::endl;
	return 0;
}

char Converter::toChar() {


}

void Converter::operator()(void) {
	Converter::toInt();
//	std::cout << "Int: " << Converter::toInt() << std::endl;
//	std::cout << "Char: " << Converter::toChar() << std::endl;
}

void Converter::operator()(const char *arg) {
	_arg = arg;
	(*this)();
}



