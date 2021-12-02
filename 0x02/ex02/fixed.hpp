//
// Created by Jimbo Siona on 11/30/21.
//

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

#define FIXED_POINT_FRACTIONAL_BITS 8

class Fixed {
public:

    Fixed();
	explicit Fixed(int newRaw);
	explicit Fixed(float newRaw);
	Fixed(Fixed const &src);

	Fixed & operator=(Fixed const &rhs);
        //  comparison operators
    bool operator>(const Fixed &rhs) const;
    bool operator>=(const Fixed &rhs) const;
    bool operator<(const Fixed &rhs) const;
    bool operator<=(const Fixed &rhs) const;
    bool operator==(const Fixed &rhs) const;
    bool operator!=(const Fixed &rhs) const;
        //  arithmetic operators
    Fixed operator+(const Fixed &rhs) const;
    Fixed operator-(const Fixed &rhs) const;
    Fixed operator*(const Fixed &rhs) const;
    Fixed operator/(const Fixed &rhs) const;
        //  increment/decrement operators
    Fixed& operator++();
    Fixed operator++(int);
    Fixed& operator--();
    Fixed operator--(int);

        //  utils
	int getRawBits( void ) const;
	void setRawBits(int newRaw);
	float toFloat( void ) const;
	int toInt( void ) const;

    static Fixed min(const Fixed &f1, const Fixed &f2);
    static Fixed max(const Fixed &f1, const Fixed &f2);

private:
	int _raw;
    static const int _fracBits = FIXED_POINT_FRACTIONAL_BITS;
};

struct ZeroDivisionError: public std::exception
{
    const char* what() const throw() { return "division by zero"; }
};

std::ostream& operator<<(std::ostream & o, Fixed const& i);

#endif //FIXED_HPP
