//
// Created by Jimbo Siona on 12/3/21.
//

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap: public FragTrap, ScavTrap {

private:
    std::string _diamondName;

public:
    explicit DiamondTrap(const std::string& name);
    ~DiamondTrap();

    void attack(std::string const &target);
    void whoAmI(void);
};


#endif //DIAMONDTRAP_HPP
