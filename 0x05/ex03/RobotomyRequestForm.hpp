//
// Created by Jimbo Siona on 12/9/21.
//

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <cstdlib>
#include <ctime>
#include "AForm.hpp"

class RobotomyRequestForm: public AForm  {
private:
	std::string _target;

public:
	explicit RobotomyRequestForm(const std::string& target);
	RobotomyRequestForm(RobotomyRequestForm const &src);
	RobotomyRequestForm & operator=(RobotomyRequestForm const &rhs);
	~RobotomyRequestForm();

	void execute(Bureaucrat const & executor) const;
	const std::string &getTarget() const;
};


#endif //ROBOTOMYREQUESTFORM_HPP
