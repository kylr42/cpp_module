//
// Created by user on 06.12.2021.
//
#include "Character.hpp"

Character::Character(std::string name) : _name(name) {
	int i = 0;
	while (i < MAX_M)
		_m[i++] = NULL;
}

Character::Character(const Character &src) : _name(src._name) {

	for (int i = 0; i < MAX_M; i++)
		_m[i] = src._m[i];

}

Character &Character::operator=(const Character &rhs) {
	_name = rhs._name;
	for (int i = 0; i < MAX_M; i++)
		_m[i] = rhs._m[i];
	return *this;
}

std::string const &Character::getName(void) const {
	return _name;
}

void Character::equip(AMateria *m) {
	int i = 0;
	while (_m[i] != NULL && i < MAX_M)
		i++;
	if (i < MAX_M)
		_m[i] = m;
}

void Character::unequip(int idx) {
	if (0 >= idx && idx < MAX_M)
		_m[idx] = NULL;
}

void Character::use(int idx, ICharacter &target) {
	if (idx >= 0 && idx < MAX_M && _m[idx])
		_m[idx]->use(target);
}
