//
// Created by Jimbo Siona on 12/8/21.
//

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"


int main() {
	try {
		Bureaucrat bob("bob", 1);

		PresidentialPardonForm ppf("Home");
		bob.signForm(ppf);
		bob.executeForm(ppf);

		std::cout << "\n-----------\n" << std::endl;

		RobotomyRequestForm rrf("Home");
		bob.signForm(rrf);
		bob.executeForm(rrf);

		std::cout << "\n-----------\n" << std::endl;

		ShrubberyCreationForm scf("Home");
		bob.signForm(scf);
		bob.executeForm(scf);
	}
	catch (std::exception &e) {
		std::cerr
				<< RED << "Error: "
				<< e.what()
				<< RESET << std::endl;
	}

	return 0;
}