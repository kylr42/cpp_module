//
// Created by Jimbo Siona on 12/3/21.
//

#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {

public:
    explicit FragTrap(const std::string& name);
    ~FragTrap();

    void highFivesGuys(void);
};


#endif //FRAGTRAP_H
