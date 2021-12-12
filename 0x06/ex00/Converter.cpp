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

Converter::operator int()
{
	int i = atoi(_arg);
	if (!i && *_arg != '0' && strlen(_arg) < 2)
		i = static_cast<int>(*_arg);
	if (!i && *_arg != '0')
		throw "impossible";
	return i;
}

Converter::operator char()
{
	int i = atoi(_arg) % 128;
	if (i < 0)
		i = -i;
	if (!i && *_arg != '0' && strlen(_arg) < 2)
		i = static_cast<int>(*_arg);
	if (!strcmp(_arg, "nan"))
		throw "impossible";
	if (!isprint(i))
		throw "Non displayable";
	return static_cast<char>(i);
}

Converter::operator float()
{
	float i = atof(_arg);
	if (!i && *_arg != '0' && strlen(_arg) < 2)
		i = static_cast<float>(*_arg);
	if (!i && *_arg != '0')
		throw "nanf";
	return i;
}

Converter::operator double()
{
	double i = atof(_arg);
	if (!i && *_arg != '0' && strlen(_arg) < 2)
		i = static_cast<double>(*_arg);
	if (!i && *_arg != '0')
		throw "nan";
	return i;
}

void Converter::print(int i)
{
	try {
		if (i == 0)
			std::cout << GREEN << "Int: " << (int) *this << RESET << std::endl;
		else if (i == 1)
			std::cout << GREEN << "Char: " << (char) *this << std::endl;
		else if (i == 2)
			std::cout << GREEN << "Float: " << (float) *this << (static_cast<int>((float) *this)
				- ((float) *this) ? "f" : ".0f")  << RESET <<  std::endl;
		else if (i == 3)
			std::cout << GREEN << "Double: " << (double) *this <<  (static_cast<int>((float) *this)
				- ((float) *this) ? "f" : ".0f") << RESET  << std::endl;
	} catch (const char *e) {
		std::cerr << RED << e << RESET << std::endl;
	}
}

void Converter::operator()(void) {
	for (int i = 0; i < 4; i++)
		print(i);
}

void Converter::operator()(const char *arg) {
	_arg = arg;
	(*this)();
}

Converter::~Converter() {
	NULL;
}
