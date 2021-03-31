//
// Created by India Tollett on 3/31/21.
//

#ifndef EX01_SPAN_HPP
#define EX01_SPAN_HPP

#include <algorithm>
#include <vector>
#include <string>
#include <iostream>


class Span {
private:
	Span();
	unsigned int _n;
	std::vector<int> _arr;
public:
	Span(unsigned int N) : _n(N){};
	virtual ~Span();

	Span(Span const &src);

	Span &operator=(Span const &src);

	void addNumber(int num){
		if (_arr.size() >= _n){
			throw Span::fullStorExcep();
		}
		_arr.push_back(num);
	}

	long shortestSpan(){
		std::vector<int>::iterator it;
		long sh;

		std::vector<int> copyArr(_arr);


		if (_arr.size() < 2)
			throw Span::notEnoughElements();
		std::sort(copyArr.begin(), copyArr.end());
		it = copyArr.begin() + 1;
		sh = std::abs(*(it - 1) -  *it);
		for (it; it != copyArr.end(); it++){
			long diff = std::abs(*(it - 1) -  *it);
			if (diff < sh)
				sh = diff;
		}
		return (sh);
	}

	long longestSpan(){
		long ln = LONG_MAX;

		if (_arr.size() < 2)
			throw Span::notEnoughElements();
		int max = *std::max_element(_arr.begin(), _arr.end());
		int min = *std::min_element(_arr.begin(), _arr.end());

		ln = max - min;
		return (ln);

	}
	class fullStorExcep: public  std::exception {
	public:
		const char * what() const throw(){
			return ("storage is full already");
		}
	};

	class notEnoughElements : public std::exception {
	public:
		const char * what() const throw(){
			return ("Should be at least two elements.");
		}
	};
};


#endif
