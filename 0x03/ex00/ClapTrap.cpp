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

int ClapTrap::getEnergy(void) const {
	return _energyPoints;
}

int ClapTrap::getDamage(void) const {
	return _attackDamage;
}

int ClapTrap::getHitpoints(void) const {
	return _hitpoints;
}

std::string ClapTrap::getName(void) const {
	return _name;
}

void ClapTrap::setHitpoints(int newPoints) {
	_hitpoints = newPoints;
}
void ClapTrap::setEnergy(int newEnergy) {
	_energyPoints = newEnergy;
}
void ClapTrap::setDamage(int newDamage) {
	_attackDamage = newDamage;
}
void ClapTrap::setName(const std::string& newName) {
	_name = newName;
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

	std::cout
			<< "+ ClapTrap " << GREEN << _name << RESET
			<< " take " << RED << "-" << amount << RESET
			<< " damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	_hitpoints += amount;

	std::cout
			<< "+ ClapTrap " << GREEN << _name << RESET
			<< " repaired " << CYAN << "+" << amount << RESET
			<< " hitpoints!" << std::endl;
}
