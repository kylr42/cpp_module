//
// Created by Jimbo Siona on 12/13/21.
//

#include "Span.hpp"

Span::Span() {

}

Span::Span(unsigned int n) : _n(n) {
}

Span::Span(const Span &cope) : _n(cope._n) {
	if (!_arr.empty())
		_arr.clear();
	for (unsigned int i = 0; i < cope._n; i++)
		_arr.push_back(cope._arr[i]);
}

Span &Span::operator=(const Span &cope) {
	if (!_arr.empty())
		_arr.clear();
	_n = cope._n;
	for (unsigned int i = 0; i < cope._n; i++)
		_arr.push_back(cope._arr[i]);
	return *this;
}

void Span::addNumber(unsigned int i) {
	if (_arr.size() > _n)
		throw outOfRange();

	_arr.push_back(i);
}

void Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end) {
	if (_arr.size() + end - begin > _n)
		throw outOfRange();

	_arr.insert(_arr.begin() + _arr.size(), begin, end);
}

int Span::shortestSpan(void) const {
	if (this->_arr.size() < 2)
		throw notValidNumberOfNumbers();

	unsigned int	size = this->_arr.size();
	int			shortest = std::abs(this->_arr[1] - this->_arr[0]);
	int			result = 0;

	std::sort(this->_arr.begin(), this->_arr.end());
	for (unsigned int i = 1; i < size; i++)
	{
		if ((result = this->_arr[i] - this->_arr[i - 1]) < shortest)
			shortest = result;
	}
	return shortest;
}

int Span::longestSpan(void) const {
	if (_arr.size() < 2)
		throw notValidNumberOfNumbers();

	int max = *std::max_element(_arr.begin(), _arr.end());
	int min = *std::min_element(_arr.begin(), _arr.end());
	return max - min;
}

std::ostream &operator<<(std::ostream &out, const Span &b) {
	std::vector<int>::const_iterator it;
	for (it = b._arr.begin(); it != b._arr.end(); it++)
		out << *it << " ";
	return out;
}

const char*	Span::outOfRange::what() const throw()
{
	return "exception: not enough space";
}

const char*	Span::notValidNumberOfNumbers::what() const throw()
{
	return "exception: not valid number of numbers";
}