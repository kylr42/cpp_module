
#include "Weapon.hpp"

Weapon::Weapon() {
}

Weapon::Weapon(const std::string &newType) {
	_type = newType;
}

std::string Weapon::getType() const {
	return std::string(_type);
}

void Weapon::setType(const std::string &newType) {
	_type = newType;
}


