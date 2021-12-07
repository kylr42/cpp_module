//
// Created by user on 06.12.2021.
//

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter {
private:
	std::string _name;
	AMateria *_m[MAX_M];

public:
	explicit Character(std::string name);
	Character(const Character &src);
	Character &operator=(const Character &rhs);

	std::string const &getName(void) const;

	void equip(AMateria *m);
	void unequip(int idx);
	void use(int idx, ICharacter &target);
};

#endif
