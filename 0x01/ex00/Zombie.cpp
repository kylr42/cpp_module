#include "Zombie.hpp"

Zombie::Zombie() {
	std::cout << "Constructor called!" << std::endl;
}

Zombie::~Zombie() {
	std::cout << _name << " is dead!" << std::endl;
}

void Zombie::announce() {
	std::cout << _name << " BraiiiiiiinnnzzzZ..." << std::endl;
}
