//
// Created by Jimbo Siona on 12/8/21.
//

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <stdexcept>
#include "AForm.hpp"

#define RESET   "\033[0m"
#define BLACK   "\033[1m\033[30m"      /* Bold Black */
#define RED     "\033[1m\033[31m"      /* Bold Red */
#define GREEN   "\033[1m\033[32m"      /* Bold Green */
#define YELLOW  "\033[1m\033[33m"      /* Bold Yellow */
#define BLUE    "\033[1m\033[34m"      /* Bold Blue */
#define MAGENTA "\033[1m\033[35m"      /* Bold Magenta */
#define CYAN    "\033[1m\033[36m"      /* Bold Cyan */
#define WHITE   "\033[1m\033[37m"      /* Bold White */

class Form;
class Bureaucrat {

private:
	int _grade;
	std::string _name;

public:
	explicit Bureaucrat(const std::string& name, int grade=0);
	Bureaucrat(Bureaucrat const &src);
	Bureaucrat & operator=(Bureaucrat const &rhs);

	int getGrade() const { return _grade; }
	std::string const &getName( void ) const {return _name; }

	void highGrade();
	void lowGrade();
	void signForm(Form &f);

	class GradeTooHighException: public std::exception
	{
		const char* what() const throw() {
			return "Grade too high";
		}
	};

	class GradeTooLowException: public std::exception
	{
		const char* what() const throw() {
			return "Grade too low";
		}
	};

};

std::ostream& operator<<(std::ostream & out, Bureaucrat const& i);

#endif //BUREAUCRAT_HPP
