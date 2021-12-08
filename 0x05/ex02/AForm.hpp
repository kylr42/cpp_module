//
// Created by Jimbo Siona on 12/8/21.
//

#ifndef AFORM_HPP
#define AFORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;
class Form {
private:
	std::string _name;
	int _gradeSign;
	int _gradeExec;
	bool _isSigned;

public:
	explicit Form(const std::string& name, int gradeSign, int gradeExec, bool isSigned=false);

	int getGradeSign() const { return _gradeSign;}
	int getGradeExec() const { return _gradeExec;}
	bool getSigned() const { return _isSigned;}
	const std::string &getName() const { return _name; }
	void beSigned(Bureaucrat const &bureaucrat);

	class GradeTooHighException : public std::exception {
		const char *what() const throw() { return "✕ Grade too high ✕"; };
	};

	class GradeTooLowException : public std::exception {
		const char *what() const throw() { return "✕ Grade too low ✕"; };
	};
};

std::ostream& operator<<(std::ostream & out, Form const& i);

#endif //AFORM_HPP
