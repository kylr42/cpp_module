#include "Zombie.hpp"

Zombie::Zombie() {
	std::cout << "Constructor called!" << std::endl;
}

Zombie::Zombie(const std::string& name): _name(name){
	std::cout << _name << " created!" << std::endl;
}

Zombie::~Zombie() {
	std::cout << _name << " is dead!" << std::endl;
}

void Zombie::announce() {
	std::cout << _name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(const std::string &newName) {
	this->_name = newName;
}
