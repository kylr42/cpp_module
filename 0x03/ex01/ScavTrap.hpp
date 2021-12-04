//
// Created by user on 03.12.2021.
//

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {

public:
	explicit ScavTrap(const std::string& name);
	~ScavTrap();

	void guardGate();
};


#endif //SCAVTRAP_HPP
