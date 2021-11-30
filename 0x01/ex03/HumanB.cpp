#include "HumanB.hpp"

HumanB::HumanB(const std::string &newName) {
	_name = newName;
}

void HumanB::attack() {
	std::cout <<  _name << " attacks with his " << _weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &newWeapon) {
	_weapon = &newWeapon;
}
