//
// Created by Jimbo Siona on 12/8/21.
//

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <stdexcept>

class Bureaucrat {

private:
	int _grade;
	std::string _name;

public:

	explicit Bureaucrat(const std::string& name, int grade=0);
	Bureaucrat(Bureaucrat const &src);
	Bureaucrat & operator=(Bureaucrat const &rhs);
	~Bureaucrat();

	int getGrade() const { return _grade; }
	std::string getName( void ) const {return _name; }

	class GradeTooHighException: public std::exception
	{
		const char* what() const throw() { return "invalid grade "; }
	};

	class GradeTooLowException: public std::exception
	{
		const char* what() const throw() { return "invalid grade "; }
	};

	void highGrade();

	void lowGrade();
};

std::ostream& operator<<(std::ostream & oout, Bureaucrat const& i);


#endif //BUREAUCRAT_HPP
