//
// Created by Jimbo Siona on 12/3/21.
//

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(const std::string &name)
: ClapTrap(name), ScavTrap(name), FragTrap(name) {
    _diamondName = name;
    ClapTrap::setName(name + "_clap_name");
    setHitpoints(FragTrap::_hitpoints);
    setEnergy(ScavTrap::_energyPoints);
    setDamage(FragTrap::_attackDamage);

    std::cout
            << BLACK << "*** " << RESET
            << "DiamondTrap " << getName() << " created"
            << RESET << std::endl;
}

DiamondTrap::~DiamondTrap() {
    std::cout
            << BLACK << "××× " << RESET
            << WHITE << "DiamondTrap " << getName() << " destroyed"
            << RESET << std::endl;
}

void DiamondTrap::attack(const std::string &target) {
    std::cout << "*** DiamondTrap ***" << std::endl;
    ScavTrap::attack(target);
    std::cout << "*** DiamondTrap ***" << std::endl;

}

void DiamondTrap::whoAmI(void) {
    std::cout
            << "+ ClapTrap: " << GREEN
            << ClapTrap::getName() << std::endl << RESET
            << "\t* DiamondTrap: " << CYAN
            << _diamondName << std::endl << RESET;
    std::cout << "\tHitpoints: " << getHitpoints() << std::endl;
    std::cout << "\tEnergy: " << getEnergy() << std::endl;
    std::cout << "\tDamage: " << getDamage() << std::endl;
}
