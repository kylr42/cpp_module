//
// Created by user on 07.12.2021.
//

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria {
public:
	Cure(void);
	Cure(const Cure &src);
	Cure &operator=(const Cure &rhs);

	AMateria *clone(void) const;
	void use(ICharacter &target);
};

#endif
