#include "Zombie.hpp"

int main()
{
	int N = 10;
	Zombie *tmpHorde = zombieHorde(N, "test");

	for (int i = 0; i < N; i++)
		tmpHorde[i].announce();

	delete[] tmpHorde;
	return 0;
}