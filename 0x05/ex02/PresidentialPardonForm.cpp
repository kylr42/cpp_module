//
// Created by Jimbo Siona on 12/9/21.
//

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string& target)
: AForm("PresidentialPardonForm", 145, 137), _target(target) {

}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src)
: AForm(src), _target(src.getTarget()) {

}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &rhs) {
	_target = rhs._target;
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() {

}

const std::string &PresidentialPardonForm::getTarget() const {
	return _target;
}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const {
	AForm::execute(executor);
	std::cout << "Tells us " << _target << " has been pardoned by Zafod Beeblebrox." << std::endl;
}

