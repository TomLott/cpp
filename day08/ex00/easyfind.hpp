#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <exception>
#include <algorithm>

template <typename T>
typename T::iterator easyfind(T & t, int num){
	int i = 0;

	typename T::iterator it = std::find(t.begin(), t.end(), num);

	if (it == t.end())
		throw std::exception();
	return it;
}



#endif
