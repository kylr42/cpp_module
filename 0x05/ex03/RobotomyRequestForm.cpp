//
// Created by Jimbo Siona on 12/9/21.
//

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string& target)
		: AForm("RobotomyRequestForm", 72, 45), _target(target) {

}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src)
		: AForm(src), _target(src.getTarget()) {

}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs) {
	_target = rhs._target;
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {

}

const std::string &RobotomyRequestForm::getTarget() const {
	return _target;
}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const {
	AForm::execute(executor);

	srand(time(nullptr));
	std::cout << "Drrr(аля звуки сверления)" << std::endl;
	if (rand() % 2)
		std::cout << _target << " has been robotomized successfully" << std::endl;
	else
		std::cout << "Error: " << _target << " has not been robotomized" << std::endl;
}



