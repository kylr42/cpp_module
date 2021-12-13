//
// Created by Jimbo Siona on 12/13/21.
//

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>

class Span {
private:
	unsigned int _n;
	std::vector<int> _arr;
	Span();

public:
	Span(unsigned int n);
	Span(const Span &cope);

	Span &operator=(const Span &cope);

	friend std::ostream &operator<<(std::ostream &out, const Span &b);

	void addNumber(unsigned int i);
	void addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
	unsigned int shortestSpan(void);
	unsigned int longestSpan(void);

	class outOfRange: public std::exception
	{
		virtual const char* what() const throw();
	};
	class notValidNumberOfNumbers: public std::exception
	{
		virtual const char* what() const throw();
	};
};



#endif //SPAN_HPP
