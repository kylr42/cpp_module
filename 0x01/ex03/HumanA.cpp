#include "HumanA.hpp"

HumanA::HumanA(const std::string &newName, Weapon &newWeapon)
		: _weapon(newWeapon) {
	_name = newName;
}

void HumanA::attack(void) {
	std::cout << _name << " attacks with his "
			  << _weapon.getType() << std::endl;
}
