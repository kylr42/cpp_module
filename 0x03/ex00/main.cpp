//
// Created by user on 03.12.2021.
//

#include "ClapTrap.hpp"
#include <cstdlib>
#include <ctime>

int main()
{
	ClapTrap robot1("C1");

	srand(time(NULL));
	while (robot1.getPoints() > 0) {
		std::cout << std::endl;
		robot1.takeDamage(rand() % 10 + 1);
		robot1.beRepaired(rand() % 3 + 1);
		robot1.attack("C2");
	}
	return 0;
}