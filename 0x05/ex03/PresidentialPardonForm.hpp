//
// Created by Jimbo Siona on 12/9/21.
//

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm: public AForm {
private:
	std::string _target;

public:
	explicit PresidentialPardonForm(const std::string& target);
	PresidentialPardonForm(PresidentialPardonForm const &src);
	PresidentialPardonForm & operator=(PresidentialPardonForm const &rhs);
	~PresidentialPardonForm();

	void execute(Bureaucrat const & executor) const;
	const std::string &getTarget() const;
};


#endif //PRESIDENTIALPARDONFORM_HPP
