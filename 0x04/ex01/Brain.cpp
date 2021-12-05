//
// Created by Jimbo Siona on 12/5/21.
//

#include "Brain.hpp"

Brain::Brain() {
    for (int i = 0; i < IDEAS; i++)
        _ideas[i] = "ideas_" + std::to_string(i);
}

Brain::Brain(const Brain &src) {
    for (int i = 0; i < IDEAS; i++)
        this->_ideas[i] = src._ideas[i];
}

Brain &Brain::operator=(const Brain &rhs) {
    for (int i = 0; i < IDEAS; i++)
        _ideas[i] = rhs._ideas[i];
    return *this;
}

Brain::~Brain() {
    std::cout << "Delete Brain | ";
}

std::string Brain::getIdea(int i) const {
    return _ideas[i];
}
