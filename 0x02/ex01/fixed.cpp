//
// Created by Jimbo Siona on 11/30/21.
//

#include "fixed.hpp"

Fixed::Fixed(int const raw) : _raw(raw){
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &src) : _raw(src._raw) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &rhs) {
	std::cout << "Assignation operator called" << std::endl;
	this->_raw = rhs.getRawBits();
	return *this;
}

int Fixed::getRawBits() const {
	std::cout << "getRawBits member function called" << std::endl;
	return this->_raw;
}

void Fixed::setRawBits(const int newRaw) {
	_raw = newRaw;
}

