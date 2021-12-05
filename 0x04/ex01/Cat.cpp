//
// Created by Jimbo Siona on 12/4/21.
//

#include "Cat.hpp"

Cat::Cat() : Animal() {
    _type = "Cat";
    _brain = new Brain;

    std::cout
            << "+ Cat created with type: " << GREEN
            << _type << RESET
            << std::endl;
}

Cat::Cat(const Cat &src)  : Animal(src) {
    this->_brain = new Brain(*src._brain);
}

Cat::~Cat() {
    delete _brain;
    std::cout
            << WHITE << "- Cat destroyed with type: "
            << _type << RESET
            << std::endl;
}

void Cat::makeSound() const {
    std::cout
            << "* Cat sound: " << MAGENTA
            << "Meow-meow" << RESET
            << std::endl;
}

Cat &Cat::operator=(const Cat &rhs) {
    delete this->_brain;
    this->_brain = new Brain(*rhs._brain);
    return *this;
}

Brain &Cat::getBrain() const {
    return *_brain;
}

void Cat::setBrain(const Brain &brain) {
    delete this->_brain;
    this->_brain = new Brain(brain);
}


