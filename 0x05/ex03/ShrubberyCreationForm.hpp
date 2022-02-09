//
// Created by Jimbo Siona on 12/9/21.
//

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <fstream>
#include "AForm.hpp"

class ShrubberyCreationForm: public AForm  {
private:
	std::string _target;

public:
	explicit ShrubberyCreationForm(const std::string& target);
	ShrubberyCreationForm(ShrubberyCreationForm const &src);
	ShrubberyCreationForm & operator=(ShrubberyCreationForm const &rhs);
	~ShrubberyCreationForm();

	void execute(Bureaucrat const & executor) const;
	const std::string &getTarget() const;
};


#endif //SHRUBBERYCREATIONFORM_HPP
