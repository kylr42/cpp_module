//
// Created by Jimbo Siona on 12/4/21.
//

#include "Dog.hpp"

Dog::Dog() : Animal() {
    _type = "Dog";
    _brain = new Brain;

    std::cout
            << "+ Dog created with type: " << GREEN
            << _type << RESET
            << std::endl;
}

Dog::Dog(const Dog &src)  : Animal(src) {
    this->_brain = new Brain(*src._brain);
}

Dog::~Dog() {
    delete _brain;
    std::cout
            << WHITE << "- Dog destroyed with type: "
            << _type << RESET
            << std::endl;
}

void Dog::makeSound() const {
    std::cout
            << "* Dog sound: " << MAGENTA
            << "Gav-gav" << RESET
            << std::endl;
}

Dog &Dog::operator=(const Dog &rhs) {
    delete this->_brain;
    this->_brain = new Brain(*rhs._brain);
    return *this;
}

Brain &Dog::getBrain() const {
    return *_brain;
}

void Dog::setBrain(const Brain &brain) {
    delete this->_brain;
    this->_brain = new Brain(brain);
}


