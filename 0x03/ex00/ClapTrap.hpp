//
// Created by user on 03.12.2021.
//
#pragma once
#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

#define RESET   "\033[0m"
#define BLACK   "\033[1m\033[30m"      /* Bold Black */
#define RED     "\033[1m\033[31m"      /* Bold Red */
#define GREEN   "\033[1m\033[32m"      /* Bold Green */
#define YELLOW  "\033[1m\033[33m"      /* Bold Yellow */
#define BLUE    "\033[1m\033[34m"      /* Bold Blue */
#define MAGENTA "\033[1m\033[35m"      /* Bold Magenta */
#define CYAN    "\033[1m\033[36m"      /* Bold Cyan */
#define WHITE   "\033[1m\033[37m"      /* Bold White */

class ClapTrap {
private:
	std::string _name;
	int _hitpoints;
	int _energyPoints;
	int _attackDamage;

public:
	explicit ClapTrap(const std::string& name);
	~ClapTrap();

    //	Getters
    int getEnergy(void) const;
    int getDamage(void) const;
    int getHitpoints(void) const;
    std::string getName(void) const;

    //	Setters
    void setEnergy(int newEnergy);
    void setDamage(int newDamage);
    void setHitpoints(int newPoints);
    void setName(const std::string& newName);

    //    Utils
	void attack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};


#endif //CLAPTRAP_HPP
