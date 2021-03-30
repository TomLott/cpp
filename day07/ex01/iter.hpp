#ifndef ITER_HPP
#define ITER_HPP

#include <iomanip>

template <typename T>
void iter(T * addr, int len, void (*f)(T &elem)){
	for (int i = 0; i < len; i++)
		(*f)(addr[i]);
}

template <typename T>
void print_f(T & a){
	std::cout << std::fixed << std::setprecision(1) <<  a << std::endl;
}

#endif
