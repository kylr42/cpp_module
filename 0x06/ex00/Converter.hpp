//
// Created by user on 11.12.2021.
//

#ifndef CONVERTER_HPP
#define CONVERTER_HPP

#include <iostream>
#include <string>

class Converter {
private:
	const char *_arg;

public:
	explicit Converter(const char *arg);
	Converter(Converter const &src);
	Converter &operator=(Converter const &rhs);
	~Converter();

	void operator()(const char *arg);
	void operator()(void);

	int toInt();
	char toChar();
	const std::string & toFloat();
	const std::string & toDouble();

};


#endif //CONVERTER_HPP
