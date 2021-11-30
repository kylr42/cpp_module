#pragma once
#ifndef D01_ZOMBIE_HPP
#define D01_ZOMBIE_HPP

#include <iostream>

class Zombie {
private:
	Zombie();

	std::string _name;

public:
	 explicit Zombie(std::string name): _name(name){}
	~Zombie();

	void announce();
};


Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif //D01_ZOMBIE_HPP
