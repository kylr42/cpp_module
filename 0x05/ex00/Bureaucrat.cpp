//
// Created by Jimbo Siona on 12/8/21.
//

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string &name, int grade)
			: _grade(grade), _name(name) {
	std::cout << *this << std::endl;
	if (_grade > 150)
		throw Bureaucrat::GradeTooLowException();
	if (_grade < 1)
		throw Bureaucrat::GradeTooHighException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &src) {
	_grade = src.getGrade();
	_name = src.getName();
	*this = src;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &rhs) {
	_grade = rhs.getGrade();
	_name = rhs.getName();
	return *this;
}

void Bureaucrat::highGrade() {
	_grade++;
	std::cout << *this << std::endl;
	if (_grade > 150)
		throw Bureaucrat::GradeTooLowException();
	if (_grade < 1)
		throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::lowGrade() {
	_grade--;
	std::cout << *this << std::endl;
	if (_grade > 150)
		throw Bureaucrat::GradeTooLowException();
	if (_grade < 1)
		throw Bureaucrat::GradeTooHighException();
}

Bureaucrat::~Bureaucrat() {
	_grade = 0;
}

std::ostream& operator<<(std::ostream & out, Bureaucrat const& i)
{
	return out << "Bureaucrat: " << i.getName()
			<< " grade: " << i.getGrade();
}