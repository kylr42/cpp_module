//
// Created by Jimbo Siona on 12/12/21.
//

#ifndef ITER_HPP
#define ITER_HPP

template<typename T>
void print(T &i) {
	std::cout << typeid(T &).name() << " - " << i << std::endl;
}

template<typename T, typename U>
void iter(T *arr, U length, void (*func)(T &))
{
	for (U i = 0; i < length; ++i)
		func(arr[i]);
}


#endif //ITER_HPP
