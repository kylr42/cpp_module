//
// Created by Jimbo Siona on 12/8/21.
//

#include "Bureaucrat.hpp"

#define RED "\033[31m"
#define END "\033[0m"

int main() {
	try {
		Bureaucrat bureaucrat("bob", 1);
		bureaucrat.highGrade();
		bureaucrat.lowGrade();
		bureaucrat.lowGrade();
	}
	catch (std::exception &e) {
		std::cerr
		<< RED << "Error: "
		<< e.what()
		<< END << std::endl;
	}

	return 0;
}