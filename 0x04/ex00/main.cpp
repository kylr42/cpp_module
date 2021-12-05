//
// Created by Jimbo Siona on 12/4/21.
//

#include "Cat.hpp"
#include "Dog.hpp"

int main() {
    const Animal *meta = new Animal();
    const Animal *j = new Dog();
    const Animal *i = new Cat();

    std::cout << std::endl;
    std::cout << meta->getType() << " " << std::endl;
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;

    std::cout << std::endl;
    meta->makeSound();
    j->makeSound();
    i->makeSound(); //will output the cat sound!

    std::cout << std::endl;
    delete j;
    delete i;
    delete meta;
}