//
// Created by Jimbo Siona on 12/4/21.
//

#ifndef CPP_MODULE_ANIMAL_H
#define CPP_MODULE_ANIMAL_H

#include <iostream>
#include "Brain.hpp"

#define RESET   "\033[0m"
#define BLACK   "\033[1m\033[30m"      /* Bold Black */
#define RED     "\033[1m\033[31m"      /* Bold Red */
#define GREEN   "\033[1m\033[32m"      /* Bold Green */
#define YELLOW  "\033[1m\033[33m"      /* Bold Yellow */
#define BLUE    "\033[1m\033[34m"      /* Bold Blue */
#define MAGENTA "\033[1m\033[35m"      /* Bold Magenta */
#define CYAN    "\033[1m\033[36m"      /* Bold Cyan */
#define WHITE   "\033[1m\033[37m"      /* Bold White */

class Animal {

protected:
    std::string _type;

public:
    Animal();
    Animal(Animal const &src);
    Animal &operator=(const Animal &rhs);
    virtual ~Animal();

    std::string getType() const;
    void setType(const std::string &newType);

    virtual void makeSound() const;

};


#endif //CPP_MODULE_ANIMAL_H
