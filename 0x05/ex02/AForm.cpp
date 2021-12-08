//
// Created by Jimbo Siona on 12/8/21.
//

#include "AForm.hpp"

Form::Form(const std::string &name, int gradeSign, int gradeExec, bool isSigned) {
	_name = name;
	_gradeSign = gradeSign;
	_gradeExec = gradeExec;
	_isSigned = isSigned;

	std::cout << *this << std::endl;
	if (1 > gradeSign || 1 > gradeExec)
		throw GradeTooHighException();
	if (gradeSign > 150 || gradeExec > 150)
		throw GradeTooLowException();
}

void Form::beSigned(Bureaucrat const &bureaucrat) {
	if (_gradeSign >= bureaucrat.getGrade())
		_isSigned = true;
	else
		throw GradeTooLowException();
}

std::ostream& operator<<(std::ostream & out, Form const& i)
{
	out << "Form: " + i.getName()
	        << (i.getSigned() ? ", signed" : ", not signed") << "\n"
	        << "Grade required to sign: " << i.getGradeSign() << "\n"
	        << "Grade required to execute: " << i.getGradeExec();
	    return out;
}


