//
// Created by user on 03.12.2021.
//

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name) {
	setHitpoints(100);
	setEnergy(50);
	setDamage(20);

	std::cout
			<< BLUE << "××× " << RESET
			<< "ScavTrap " << getName() << " created"
			<< RESET << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout
			<< BLUE << "××× " << RESET
			<< WHITE << "ScavTrap " << getName() << " destroyed"
			<< RESET << std::endl;
}

void ScavTrap::guardGate() {
	std::cout
			<< BLUE << "××× " << RESET
			<< "ScavTrap have enterred in Gate keeper mode."
			<< std::endl;
}

void ScavTrap::attack(const std::string &target) {
    std::cout << "--- ScavTrap ---" << std::endl;
    ClapTrap::attack(target);
    std::cout << "--- ScavTrap ---" << std::endl;
}
