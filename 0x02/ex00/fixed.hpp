//
// Created by Jimbo Siona on 11/30/21.
//

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

#define FIXED_POINT_FRACTIONAL_BITS 8

class Fixed {
public:
	explicit Fixed(int raw = 0);
	Fixed(Fixed const &src );
	~Fixed();

	Fixed & operator=(Fixed const &rhs);

	int getRawBits( void ) const;
	void setRawBits( int newRaw);

private:
	int _raw;
    static const int _fracBits = FIXED_POINT_FRACTIONAL_BITS;
};

std::ostream& operator<<(std::ostream&o, Fixed const& i);


#endif //FIXED_HPP
