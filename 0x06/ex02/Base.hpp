//
// Created by Jimbo Siona on 12/12/21.
//

#ifndef INC_0X02_BASE_HPP
#define INC_0X02_BASE_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

class Base {
public:
	virtual ~Base() {};
};

class A : public Base {
public:
	A() { std::cout << "Class: A" << std::endl; };
};

class B : public Base {
public:
	B() { std::cout << "Class: B" << std::endl; };
};

class C : public Base {
public:
	C() { std::cout << "Class: C" << std::endl; };
};


#endif //INC_0X02_BASE_HPP
