//
// Created by user on 07.12.2021.
//

#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure") {
}

Cure::Cure(const Cure &src) : AMateria(src._type) {
}

Cure &Cure::operator=(const Cure &rhs) {
	_type = rhs._type;
	return *this;
}

AMateria *Cure::clone(void) const {
	return new Cure;
}

void Cure::use(ICharacter &target) {
	std::cout << "* heals " + target.getName() + "'s wounds *" << std::endl;
}
