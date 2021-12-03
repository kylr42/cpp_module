//
// Created by Jimbo Siona on 12/3/21.
//

#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string &name) : ClapTrap(name) {
    setHitpoints(100);
    setEnergy(100);
    setDamage(30);

    std::cout
            << "✖️✖️✖️ FragTrap "
            << getName() << " created"
            << RESET << std::endl;
}

FragTrap::~FragTrap() {
    std::cout
            << WHITE << "✖️✖️✖️ FragTrap "
            << getName() << " destroyed"
            << RESET << std::endl;
}

void FragTrap::highFivesGuys(void) {
    std::cout
            << "✖️✖️✖️ FragTrap "
            << "High-five"
            << std::endl;
}