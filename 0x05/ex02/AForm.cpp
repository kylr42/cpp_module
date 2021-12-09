//
// Created by Jimbo Siona on 12/8/21.
//

#include "AForm.hpp"

AForm::AForm(const std::string &name, int gradeSign, int gradeExec, bool isSigned) {
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

AForm::AForm(const AForm &src) {
	_name = src.getName();
	_gradeSign = src.getGradeSign();
	_gradeExec = src.getGradeExec();
	_isSigned = src.getSigned();
	*this = src;
}

AForm &AForm::operator=(const AForm &rhs) {
	_name = rhs.getName();
	_gradeSign = rhs.getGradeSign();
	_gradeExec = rhs.getGradeExec();
	_isSigned = rhs.getSigned();
	return *this;
}

AForm::~AForm() {

}

void AForm::beSigned(Bureaucrat const &bureaucrat) {
	if (_gradeSign >= bureaucrat.getGrade())
		_isSigned = true;
	else
		throw GradeTooLowException();
}

void AForm::execute(Bureaucrat const &executor) const {
	if (!_isSigned)
		throw FormNotSignedException();
	if (executor.getGrade() > _gradeSign)
		throw GradeTooLowException();
}

std::ostream& operator<<(std::ostream & out, AForm const& i)
{
	out << "Form: " + i.getName()
		<< (i.getSigned() ? ", signed" : ", not signed") << "\n"
		<< "Grade required to sign: " << i.getGradeSign() << "\n"
		<< "Grade required to execute: " << i.getGradeExec();
	return out;
}

