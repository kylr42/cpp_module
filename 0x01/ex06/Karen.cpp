#include "Karen.hpp"

void Karen::debug(void) {
	std::cout << "[DEBUG] " << std::endl
	<< "I love to get extra bacon! " << std::endl;
}

void Karen::info(void) {
	std::cout << "[INFO] " << std::endl
	<< "I cannot believe adding extra bacon cost more money. " << std::endl;
}

void Karen::warning(void) {
	std::cout << "[WARNING] " << std::endl
	<< "I think I deserve to have some extra bacon for free. " << std::endl;
}

void Karen::error(void) {
	std::cout << "[ERROR] " << std::endl
	<< "I want to speak to the manager now. " << std::endl;
}

void Karen::complain(std::string level) {
	if (level == "debug")
		debug();
	else if (level == "info")
		info();
	else if (level == "warning")
		warning();
	else if (level == "error")
		error();
	else
		std::cerr << "[ Probably complaining about insignificant problems ]"<< std::endl;
}


