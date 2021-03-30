#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <exception>
#include <string>
#include <iostream>

template <class T>
class Array{
private:
	T *_array;
	unsigned int len;
public:

	Array(){
		_array = new T[0];
		len = 0;
	}
	~Array(){
		delete [] _array;
	}

	Array(unsigned int n){
		_array = new T[n];
		len = n;
	}

	Array(Array const & src){
		if (this != &src){
			*this = src;
		}
	}

	Array & operator = (Array const &src){
		if (this != &src){
			len = src.len;
			this->_array = new T[len];
			for (int i = 0; i < len; i++){
				_array[i] = src._array[i];
			}
		}
		return (*this);
	}

	T & operator[] (unsigned int n){
		if (n >= len){
			throw OutOfRange();
		}
		return (this->_array[n]);
	}

	int size() const{
		return (len);
	}

	class OutOfRange : public std::exception {
		virtual const char * what() const throw(){
			return ("Out of range");
		}
	};
};


#endif
