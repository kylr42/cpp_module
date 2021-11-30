#include "Zombie.hpp"

Zombie *zombieHorde( int N, const std::string& name ){
	if (N <= 0)
		return nullptr;

	std::string tmpName;
	Zombie *horde = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		tmpName = name + "_" + std::to_string(i);
		horde[i].setName(tmpName);
	}
	return horde;
}