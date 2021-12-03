//
// Created by user on 03.12.2021.
//

#include <cstdlib>
#include <ctime>
#include "FragTrap.hpp"

int main() {
	FragTrap robot1("S1");

	robot1.highFivesGuys();
	srand(time(NULL));
	while (robot1.getHitpoints() > 0) {
		std::cout << std::endl;
		robot1.takeDamage(rand() % 100 + 1);
		robot1.beRepaired(rand() % 2 + 1);
		robot1.attack("S2");
	}
	std::cout << std::endl;
	return 0;
}
