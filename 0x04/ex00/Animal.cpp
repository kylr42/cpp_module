//
// Created by Jimbo Siona on 12/4/21.
//

#include "Animal.hpp"

Animal::Animal() : _type("[Animal]") {
    std::cout << "+ Animal created: " << GREEN << _type << RESET << std::endl;
}

Animal::~Animal() {
    std::cout << WHITE << "- Animal destroyed: " << _type << RESET << std::endl;
}

void Animal::makeSound() const {
    std::cout
            << "* Animal sound: [" << MAGENTA
            << "EMPTY" << RESET << "]"
            << std::endl;
}

void Animal::setType(const std::string &newType) {
    _type = newType;
}

std::string Animal::getType() const {
    return _type;
}
