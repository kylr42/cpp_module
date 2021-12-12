//
// Created by Jimbo Siona on 12/12/21.
//

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T>
class Array {
private:
	T *_arr;
	unsigned int _size;

public:
	Array(): _arr(nullptr), _size(0) {};

	explicit Array(unsigned int size): _arr(new T[size]), _size(size) {};

	Array(const Array<T> &other) {
		_size = other.size();
		_arr = new T[other.size()];
		for (unsigned int i = 0; i < other.size(); ++i)
			_arr[i] = other[i];
	}

	~Array() {
		delete[] _arr;
	}

	Array<T> &operator=(const Array<T> &other) {
		if (this != &other)
			delete[] _arr;
		_size = other.size();
		_arr = new T[other.size()];
		for (unsigned int i = 0; i < other.size(); ++i)
			_arr[i] = other[i];
		return *this;
	}

	T &operator[](int index) {
		if (index < 0 || index >= _size)
			throw std::exception();
		return _arr[index];
	}

	T const & operator[](int index) const {
		if (index < 0 || index >= _size)
			throw std::exception();
		return _arr[index];
	}

	int size() const {
		return _size;
	}
};

template<typename T>
std::ostream &operator<<(std::ostream &out, const Array<T> &arr) {
	out << "[ ";
	for(int i = 0; i < arr.size(); ++i)
		out << arr[i] << " ";
	out << "]" << std::endl;
	return out;
}

#endif //ARRAY_HPP
