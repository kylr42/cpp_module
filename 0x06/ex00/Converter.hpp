//
// Created by user on 11.12.2021.
//

#ifndef CONVERTER_HPP
#define CONVERTER_HPP

#include <iostream>
#include <cstdlib>
#include <cstring>

#define GREEN "\033[32m"
#define RED "\033[31m"
#define RESET "\033[0m"

class Converter {
private:
	const char *_arg;

public:
	explicit Converter(const char *arg);
	Converter(Converter const &src);
	Converter &operator=(Converter const &rhs);
	~Converter();

	operator int();
	operator char();
	operator float();
	operator double();
	void operator()(const char *arg);
	void operator()(void);

	void print(int i);
};


#endif //CONVERTER_HPP
