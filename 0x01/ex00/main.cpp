#include "Zombie.hpp"

int main()
{
	Zombie z1(std::string("Elliot"));
	z1.announce();

	Zombie *z2 = newZombie(std::string("Angela"));
	z2->announce();

	randomChump(std::string("Darlin"));

	delete z2;
	return 0;
}