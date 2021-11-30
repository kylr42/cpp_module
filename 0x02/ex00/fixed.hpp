//
// Created by Jimbo Siona on 11/30/21.
//

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
public:

	Fixed();
	Fixed(int const raw);
	Fixed(Fixed const &src );
	~Fixed();

	Fixed & operator=(Fixed const &rhs);

	int getRawBits( void ) const;
	void setRawBits( int newRaw);

private:

	int _raw;
};

std::ostream& operator<<(std::ostream&o, Fixed const& i);


#endif //FIXED_HPP
