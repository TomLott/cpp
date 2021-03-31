#include "mutantstack.hpp"

void basic();
void ours();


int main()
{
	//basic();
	ours();
}

void ours(){
	MutantStack<int> s;

	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);

	MutantStack<int>::reverse_iterator it = s.rbegin();
	MutantStack<int>::reverse_iterator ite = s.rend();

	for (it; it != ite;it++)
		std::cout << *it << std::endl;
	s.pop();

	MutantStack<int>::reverse_iterator it1 = s.rbegin();
	MutantStack<int>::reverse_iterator ite1 = s.rend();

	std::cout << "============" << std::endl;
	for (it1; it1 != ite1;it1++)
		std::cout << *it1 << std::endl;
}


void basic(){
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
}