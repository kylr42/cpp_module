#pragma once
#ifndef HUMAN_B_HPP
#define HUMAN_B_HPP

#include "Weapon.hpp"


class HumanB {
private:
	Weapon *_weapon;
	std::string _name;

public:
	explicit HumanB(const std::string &newName);

	void setWeapon(Weapon& newWeapon);
	void attack( void );


};


#endif //HUMAN_B_HPP
