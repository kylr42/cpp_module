//
// Created by user on 03.12.2021.
//

#include <cstdlib>
#include <ctime>
#include "ScavTrap.hpp"

int main() {
	ScavTrap robot1("S1");
	new ScavTrap("S2");
	srand(time(NULL));
	while (robot1.getHitpoints() > 0) {

		if (robot1.getHitpoints() <= 50)
		{
			std::cout << std::endl;
			robot1.guardGate();
		}

		std::cout << std::endl;
		robot1.takeDamage(rand() % 100 + 1);
		robot1.beRepaired(rand() % 2 + 1);
		robot1.attack("S2");
	}
	std::cout << std::endl;
	return 0;
}
