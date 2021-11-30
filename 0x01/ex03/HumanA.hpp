#pragma once
#ifndef HUMAN_A_HPP
#define HUMAN_A_HPP

#include "Weapon.hpp"

class HumanA {
private:
	Weapon &_weapon;
	std::string _name;

public:
	HumanA(const std::string &newName, Weapon &newWeapon);

	void attack();

};


#endif //HUMAN_A_HPP
