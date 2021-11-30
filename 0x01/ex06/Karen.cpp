#include "Karen.hpp"

void Karen::debug(void)
{
	std::cout << "[DEBUG] " << std::endl
	<< "I love to get extra bacon! " << std::endl;
}

void Karen::info(void)
{
	std::cout << "[INFO] " << std::endl
	<< "I cannot believe adding extra bacon cost more money. " << std::endl;
}

void Karen::warning(void)
{
	std::cout << "[WARNING] " << std::endl
	<< "I think I deserve to have some extra bacon for free. " << std::endl;
}

void Karen::error(void)
{
	std::cout << "[ERROR] " << std::endl
	<< "I want to speak to the manager now. " << std::endl;
}

Karen::action Karen::funcs[] = { &Karen::debug, &Karen::info, &Karen::warning, &Karen::error };


void Karen::complain(std::string level)
{
	std::string levels[] = { "DEBUG", "INFO", "WARNING", "ERROR" };

	int i = 0;
	while (i < 4 && levels[i] != level)
		i++;

	switch (i)
	{
		case 4:
			std::cerr << RED << "[ Probably complaining about insignificant problems ]" << RESET << std::endl;
			break;
		default:
			while (i < 4)
				(this->*funcs[i++])();
	}
}


