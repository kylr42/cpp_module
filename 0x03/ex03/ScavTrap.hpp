//
// Created by user on 03.12.2021.
//

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {

public:
	explicit ScavTrap(const std::string& name);
	~ScavTrap();

	void guardGate();
    void attack(std::string const &target);
};


#endif //SCAVTRAP_HPP
