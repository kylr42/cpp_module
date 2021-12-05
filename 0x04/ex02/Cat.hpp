//
// Created by Jimbo Siona on 12/4/21.
//

#ifndef CPP_MODULE_CAT_HPP
#define CPP_MODULE_CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
private:
    Brain *_brain;

public:
    Cat();
    Cat(const Cat &src);
    Cat &operator=(const Cat &rhs);
    ~Cat();

    void makeSound() const;
    Brain &getBrain() const;
    void setBrain(const Brain &brain);
};



#endif //CPP_MODULE_CAT_HPP
