//
// Created by India Tollett on 3/31/21.
//

#include "span.hpp"

Span::Span(){

}

Span::~Span() {

}

Span::Span(const Span &src) {
	if (this != &src){
		_n = src._n;
		_arr = src._arr;
	}
}

Span & Span::operator=(const Span &src) {
	if (this != &src){
		_n = src._n;
		_arr = src._arr;
	}
	return (*this);
}