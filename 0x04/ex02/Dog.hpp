//
// Created by Jimbo Siona on 12/4/21.
//

#ifndef CPP_MODULE_DOG_HPP
#define CPP_MODULE_DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
private:
    Brain *_brain;

public:
    Dog();
    Dog(const Dog &src);
    Dog &operator=(const Dog &rhs);
    ~Dog();

    void makeSound() const;
    Brain &getBrain() const;
    void setBrain(const Brain &brain);
};


#endif //CPP_MODULE_DOG_HPP
