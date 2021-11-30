#pragma once
#ifndef KAREN_HPP
#define KAREN_HPP

#include <iostream>

#define RESET   "\033[0m"
#define RED     "\033[31m"

class Karen {

private:
	void debug( void );
	void info( void );
	void warning( void );
	void error( void );

	typedef void(Karen::*action)(void);
	static action funcs[];

public:
	void complain( std::string level );
};


#endif //KAREN_HPP
