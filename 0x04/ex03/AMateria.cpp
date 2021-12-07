//
// Created by user on 06.12.2021.
//

#include "AMateria.hpp"

AMateria::AMateria(const std::string &type) {
	_type = type;
}

AMateria::AMateria(const AMateria &src) {
	_type = src._type;
}

AMateria &AMateria::operator=(const AMateria &rhs) {
	_type = rhs._type;
	return *this;
}

AMateria::~AMateria() {

}

std::string const &AMateria::getType(void) const {
	return _type;
}

void AMateria::use(ICharacter &target) {
	std::cout << target.getName() << std::endl;
}
