//
// Created by user on 03.12.2021.
//

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string &name)
		: _name(name), _hitpoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << "+ Created: " << GREEN << name << RESET << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout
			<< WHITE << "+ ClapTrap " << _name << " destroyed"
			<< RESET << std::endl;
}

void ClapTrap::attack(const std::string &target) {
	std::cout
			<< "+ ClapTrap " << GREEN << _name << RESET
			<< " attack " << YELLOW << target << RESET
			<< ", causing " << MAGENTA << _attackDamage << RESET
			<< " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	_hitpoints -= amount;
	_attackDamage = amount - 1;

	std::cout << "+ ClapTrap " << GREEN << _name << RESET
			  << " take " << RED << "-" << amount << RESET
			  << " damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	_hitpoints += amount;

	std::cout << "+ ClapTrap " << GREEN << _name << RESET
			  << " repaired " << CYAN << "+" << amount << RESET
			  << " hitpoints!" << std::endl;
}

int ClapTrap::getPoints(void) {
	return _hitpoints;
}
