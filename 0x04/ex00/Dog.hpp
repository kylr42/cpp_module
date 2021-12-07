//
// Created by Jimbo Siona on 12/4/21.
//

#ifndef CPP_MODULE_DOG_HPP
#define CPP_MODULE_DOG_HPP

#include "Animal.hpp"

class Dog : public Animal {

public:
    Dog();
    ~Dog();

    void makeSound() const;

};


#endif //CPP_MODULE_DOG_HPP
