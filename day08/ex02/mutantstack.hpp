#ifndef EX02_MUTANTSTACK_HPP
#define EX02_MUTANTSTACK_HPP

#include <deque>
#include <stack>
#include <iostream>

template <typename U>
class MutantStack : public std::stack<U> {
private:
public:
	MutantStack() : std::stack<U>(){};
	virtual ~MutantStack() {};
	MutantStack(MutantStack const &src) : std::stack<U>(src) {};
	MutantStack &operator=(MutantStack const &src){
		if (this != &src)
			std::stack<U>::operator=(src);
		return (*this);
	};

	typedef typename std::stack<U>::container_type::iterator iterator;
	typedef typename std::stack<U>::container_type::const_iterator const_iterator;
	typedef typename std::stack<U>::container_type::reverse_iterator reverse_iterator;
	typedef typename std::stack<U>::container_type::const_reverse_iterator const_reverse_iterator;

	iterator begin(){
		return (std::stack<U>::c.begin());
	}

	iterator end(){
		return (std::stack<U>::c.end());
	}

	const_iterator begin() const{
		return (std::stack<U>::c.cbegin());
	}

	const_iterator end() const {
		return (std::stack<U>::c.cend());
	}

	reverse_iterator rbegin(){
		return (std::stack<U>::c.rbegin());
	}
	reverse_iterator rend(){
		return (std::stack<U>::c.rend());
	}

	const_reverse_iterator crbegin(){
		return (std::stack<U>::c.crbegin());
	}

	const_reverse_iterator crend(){
		return (std::stack<U>::c.crend());
	}







};


#endif
