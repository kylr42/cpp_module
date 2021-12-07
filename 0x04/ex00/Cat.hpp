//
// Created by Jimbo Siona on 12/4/21.
//

#ifndef CPP_MODULE_CAT_HPP
#define CPP_MODULE_CAT_HPP

#include "Animal.hpp"

class Cat : public Animal {

public:
    Cat();
    ~Cat();

    void makeSound() const;

};



#endif //CPP_MODULE_CAT_HPP
