//
// Created by Jimbo Siona on 11/30/21.
//

#include "fixed.hpp"

Fixed::Fixed() : _raw(0) {
    std::cout << "Default constructor called" << std::endl;
}


Fixed::Fixed(int const newRaw) : _raw(newRaw << _fracBits){
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float const newRaw) : _raw(roundf(newRaw * (1 << _fracBits))) {
    std::cout << "Float constructor called" << std::endl;
}


Fixed::Fixed(const Fixed &src) : _raw(roundf(src.toFloat() * (1 << _fracBits))) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &rhs) {
	std::cout << "Assignation operator called" << std::endl;
	this->_raw = roundf(rhs.toFloat() * (1 << _fracBits));
	return *this;
}

int Fixed::getRawBits() const {
	std::cout << "getRawBits member function called" << std::endl;
	return this->_raw;
}

void Fixed::setRawBits(const int newRaw) {
	_raw = newRaw;
}

float Fixed::toFloat(void) const {
    return (float) _raw / (1 << _fracBits);
}

int Fixed::toInt(void) const {
    return _raw >> _fracBits;
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed) {
    return out << fixed.toFloat();
}

