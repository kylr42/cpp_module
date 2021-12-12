//
// Created by Jimbo Siona on 12/12/21.
//

#include <iostream>

struct Data {
	Data(int i, char c, float f, double d) : _i(i), _c(c), _f(f), _d(d) { }
	int _i;
	char _c;
	float _f;
	double _d;
};

uintptr_t serialize(Data *ptr) {
	return reinterpret_cast<uintptr_t>(ptr);
}

Data *deserialize(uintptr_t raw) {
	return reinterpret_cast<Data *>(raw);
}

std::ostream &operator<<(std::ostream &os, const Data &data) {
	os << "int: " << data._i << std::endl;
	os << "char: " << data._c << std::endl;
	os << "float: " << (float) data._f << 'f' << std::endl;
	os << "double: " << data._d << std::endl;

	return os;
}

int main() {

	Data *data = new Data(42, '*', 42.05f, 42.5);
	uintptr_t _raw = serialize(data);

	std::cout << _raw << std::endl;

	std::cout << std::endl << "---------------" << std::endl << std::endl;

	Data *other = deserialize(_raw);
	std::cout << *other << std::endl;
	return 0;
}