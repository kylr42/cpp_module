//
// Created by user on 03.12.2021.
//

#include "DiamondTrap.hpp"

int main() {
	DiamondTrap robot1("S1");

    std::cout << std::endl;
    robot1.whoAmI();

    std::cout << std::endl;

    robot1.attack("S2");
    std::cout << std::endl;

	return 0;
}
