//
// Created by Jimbo Siona on 12/8/21.
//

#include "Intern.hpp"

int main() {
	try {
		Intern someRandomIntern;
		AForm *ppf;

		ppf = someRandomIntern.makeForm("Presidential Pardon", "Home");
		Bureaucrat bob("bob", 1);
		bob.signForm(*ppf);
		bob.executeForm(*ppf);
		delete ppf;

		std::cout << "\n-----------\n" << std::endl;

		ppf = someRandomIntern.makeForm("RobotomyRequest", "Home");
		bob.signForm(*ppf);
		bob.executeForm(*ppf);
		delete ppf;
	}
	catch (std::exception &e) {
		std::cerr
				<< RED << "Error: "
				<< e.what()
				<< RESET << std::endl;
	}

	return 0;
}