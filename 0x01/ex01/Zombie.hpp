#pragma once
#ifndef D01_ZOMBIE_HPP
#define D01_ZOMBIE_HPP

#include <iostream>

class Zombie {
private:

	std::string _name;

public:
	Zombie();
	explicit Zombie(const std::string& name);
	void setName(const std::string& newName);
	~Zombie();

	void announce();
};

Zombie *zombieHorde( int N, const std::string& name );

#endif //D01_ZOMBIE_HPP
