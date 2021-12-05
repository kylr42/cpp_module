//
// Created by Jimbo Siona on 12/4/21.
//

#include "Dog.hpp"

Dog::Dog() {
    setType("Dog");
    std::cout << "- Dog created: " << GREEN << _type << RESET << std::endl;
}

Dog::~Dog() {
    std::cout << WHITE << "+ Dog destroyed: " << _type << RESET << std::endl;
}

void Dog::makeSound() const {
    std::cout
            << "* Dog sound: " << MAGENTA
            << "Gav-gav" << RESET
            << std::endl;
}

