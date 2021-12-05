//
// Created by Jimbo Siona on 12/4/21.
//

#include "Cat.hpp"
#include "Dog.hpp"

#define ANIMAL 4

int main()
{
    const Animal* tmp[10];

    for (int i = 0; i < ANIMAL; i++)
    {
        if (i % 2)
            tmp[i] = new Dog();
        else
            tmp[i] = new Cat();
    }
    std::cout  << std::endl;

    for (int i = 0; i < ANIMAL; i++)
        std::cout << "Idea: " << tmp[i]->getBrain().getIdea(i) << std::endl;
    std::cout  << std::endl;

    for (int i = 0; i < ANIMAL; i++)
        delete tmp[i];

}