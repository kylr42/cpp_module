//
// Created by Jimbo Siona on 12/8/21.
//

#ifndef AFORM_HPP
#define AFORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;
class AForm {
private:
	std::string _name;
	int _gradeSign;
	int _gradeExec;
	bool _isSigned;

public:
	explicit AForm(const std::string& name, int gradeSign, int gradeExec, bool isSigned=false);
	AForm(AForm const &src);
	AForm & operator=(AForm const &rhs);
	~AForm();

	int getGradeSign() const { return _gradeSign;}
	int getGradeExec() const { return _gradeExec;}
	bool getSigned() const { return _isSigned;}
	const std::string &getName() const { return _name; }
	void beSigned(Bureaucrat const &bureaucrat);
	virtual void execute(Bureaucrat const & executor) const = 0;

	class GradeTooHighException : public std::exception {
		const char *what() const throw() { return "✕ Grade too high ✕"; };
	};

	class GradeTooLowException : public std::exception {
		const char *what() const throw() { return "✕ Grade too low ✕"; };
	};

	class FormNotSignedException : public std::exception {
		const char *what() const throw() { return "✕ Form not signed ✕"; };
	};
};

std::ostream& operator<<(std::ostream & out, AForm const& i);

#endif //AFORM_HPP
