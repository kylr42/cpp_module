//
// Created by Jimbo Siona on 12/13/21.
//

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <array>
#include <algorithm>

#define RESET   "\033[0m"
#define BLACK   "\033[1m\033[30m"      /* Bold Black */
#define RED     "\033[1m\033[31m"      /* Bold Red */
#define GREEN   "\033[1m\033[32m"      /* Bold Green */
#define YELLOW  "\033[1m\033[33m"      /* Bold Yellow */
#define BLUE    "\033[1m\033[34m"      /* Bold Blue */
#define MAGENTA "\033[1m\033[35m"      /* Bold Magenta */
#define CYAN    "\033[1m\033[36m"      /* Bold Cyan */
#define WHITE   "\033[1m\033[37m"      /* Bold White */


template <typename T>
void easyfind(T &array, int element)
{
	try {
		typename T::iterator it;
		it = std::find(array.begin(), array.end(), element);
		if (it != array.end())
			throw  " not found!";
		std::cout << GREEN << element << RESET << " finding!" << std::endl;
	}
	catch(const char *e) {
		std::cerr << RED << element << RESET << e << std::endl;
	}
}


#endif //EASYFIND_HPP
