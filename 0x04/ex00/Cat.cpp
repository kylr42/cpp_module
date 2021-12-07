//
// Created by Jimbo Siona on 12/4/21.
//

#include "Cat.hpp"

Cat::Cat() : Animal() {
    setType("Cat");
    std::cout << "+ Cat created with type: " << GREEN << _type << RESET << std::endl;
}

Cat::~Cat() {
    std::cout << WHITE << "- Cat destroyed with type: " << _type << RESET << std::endl;
}

void Cat::makeSound() const {
    std::cout
            << "* Cat sound: " << MAGENTA
            << "Meow-meow" << RESET
            << std::endl;
}


