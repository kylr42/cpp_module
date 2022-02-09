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

Bureaucrat::~Bureaucrat() {

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

void Bureaucrat::signForm(AForm &f) {
	try {
		f.beSigned(*this);
		std::cout << GREEN
		<< _name + " signs " + f.getName()
		<< RESET << std::endl;
	}
	catch (std::exception &e) {
		std::cerr << RED
		<< _name + " cannot sign " + f.getName() + " because " + e.what()
		<< RESET << std::endl;
	}
}

void Bureaucrat::executeForm(AForm const &f) {
	try {
		f.execute(*this);
		std::cout << GREEN
				  << _name << " executes " << f.getName()
				  << RESET << std::endl;
	}
	catch (std::exception &e) {
		std::cout << RED
				  << _name << " cannot execute " << f.getName() << " because " << e.what()
				  << RESET << std::endl;
	}
}

std::ostream& operator<<(std::ostream & out, Bureaucrat const& i)
{
	return out << "Bureaucrat: " << i.getName()
			<< " grade: " << i.getGrade();
}