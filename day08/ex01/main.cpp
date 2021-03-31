#include "span.hpp"


void func1();
int main()
{

	//func1();
	Span sp = Span(5);
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
}

void func1(){
	Span sp_full = Span(2);

	sp_full.addNumber(5);
	sp_full.addNumber(8);

	try
	{
		sp_full.addNumber(9);
	}
	catch (Span::fullStorExcep & e)
	{
		std::cerr << "Error : " << e.what() <<  std::endl;
	}

	Span sp_short = Span(5);
	sp_short.addNumber(5);
	sp_short.addNumber(3);
	sp_short.addNumber(100);
	sp_short.addNumber(-10000);
	sp_short.addNumber(11);

	std::cout <<"shortest " << sp_short.shortestSpan() << std::endl;
	std::cout <<"longest " << sp_short.longestSpan() << std::endl;

	std::cout << "======" << std::endl;
	Span sp_short_hard = Span(3);
	sp_short_hard.addNumber(1000000);
	sp_short_hard.addNumber(-1000000);
	sp_short_hard.addNumber(-1000000);

	std::cout <<"shortest " << sp_short_hard.shortestSpan() << std::endl;
	std::cout <<"longest " << sp_short_hard.longestSpan() << std::endl;

	Span sp_empty = Span(80);

	try
	{
		std::cout << sp_empty.shortestSpan() << std::endl;
	}
	catch(std::exception& e)
	{
		std::cerr << "Error : " << e.what() <<  std::endl;
	}

	std::cout << "===========" << std::endl;
	sp_empty.addNumber(5);
	sp_empty.addNumber(5);
	sp_empty.addNumber(5);

	try
	{
		std::cout <<"shortest " <<  sp_empty.shortestSpan() << std::endl;
	}
	catch(std::exception& e)
	{
		std::cerr << "Error : " << e.what() <<  std::endl;
	}
}