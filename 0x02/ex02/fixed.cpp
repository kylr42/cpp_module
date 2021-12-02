//
// Created by Jimbo Siona on 11/30/21.
//

#include "fixed.hpp"

Fixed::Fixed() : _raw(0) {
}

Fixed::Fixed(int const newRaw) : _raw(newRaw << _fracBits){
}

Fixed::Fixed(float const newRaw) : _raw(roundf(newRaw * (1 << _fracBits))) {
}


Fixed::Fixed(const Fixed &src) : _raw(roundf(src.toFloat() * (1 << _fracBits))) {
	*this = src;
}

Fixed &Fixed::operator=(const Fixed &rhs) {
	this->_raw = roundf(rhs.toFloat() * (1 << _fracBits));
	return *this;
}

int Fixed::getRawBits() const {
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

//  comparison operators
bool Fixed::operator>(const Fixed &rhs) const {
    return _raw > rhs.getRawBits();
}

bool Fixed::operator>=(const Fixed &rhs) const {
    return _raw >= rhs.getRawBits();
}

bool Fixed::operator<(const Fixed &rhs) const {
    return _raw < rhs.getRawBits();
}

bool Fixed::operator<=(const Fixed &rhs) const {
    return _raw <= rhs.getRawBits();
}

bool Fixed::operator==(const Fixed &rhs) const {
    return _raw == rhs.getRawBits();
}

bool Fixed::operator!=(const Fixed &rhs) const {
    return _raw != rhs.getRawBits();
}

//  arithmetic operators
Fixed Fixed::operator+(const Fixed &rhs) const {
    return Fixed(this->toFloat() + rhs.toFloat());
}

Fixed Fixed::operator-(const Fixed &rhs) const {
    return Fixed(this->toFloat() - rhs.toFloat());
}

Fixed Fixed::operator*(const Fixed &rhs) const {
    return Fixed(this->toFloat() * rhs.toFloat());
}

Fixed Fixed::operator/(const Fixed &rhs) const {
    if (rhs.toInt() != 0)
        return Fixed(this->toFloat() / rhs.toFloat());
    else
        throw ZeroDivisionError();
}

//  increment/decrement operators
Fixed& Fixed::operator++() {
    this->_raw++;
    return *this;
}

Fixed Fixed::operator++(int) {
    Fixed tmp(*this);
    this->_raw++;
    return tmp;
}

Fixed& Fixed::operator--() {
    this->_raw--;
    return *this;
}

Fixed Fixed::operator--(int) {
    Fixed tmp(*this);
    this->_raw--;
    return tmp;
}

Fixed Fixed::min(const Fixed &f1, const Fixed &f2) {
    return f1.getRawBits() < f2.getRawBits() ? f1 : f2;
}

Fixed Fixed::max(const Fixed &f1, const Fixed &f2) {
    return f1.getRawBits() > f2.getRawBits() ? f1 : f2;
}


