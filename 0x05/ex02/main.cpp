//
// Created by Jimbo Siona on 12/8/21.
//

#include "AForm.hpp"

int main() {
	try {
		Bureaucrat bob("bob", 7);
		Form f("Google", 10, 10);
		bob.signForm(f);

		Form ff("Slack", 5, 10);
		bob.signForm(ff);
	}
	catch (std::exception &e) {
		std::cerr
		<< RED << "Error: "
		<< e.what()
		<< RESET << std::endl;
	}

	return 0;
}