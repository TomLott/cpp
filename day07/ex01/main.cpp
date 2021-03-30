#include <iostream>
#include "iter.hpp"



int main() {
	int fIterI[3] = {1, 2, 3};

	iter(fIterI, 3, &print_f);
	std::cout << "==============" << std::endl;

	float fIterF[3] = {1, 2, 3};

	iter(fIterF, 3, &print_f);
	std::cout << "==============" << std::endl;

	double fIterD[3] = {1, 2, 3};

	iter(fIterD, 3, &print_f);
	std::cout << "==============" << std::endl;

	std::string fIterS[3] = { "hehe", "lol", "hoho" };
	iter(fIterS, 3, &print_f);
	std::cout << "==============" << std::endl;
	iter(fIterS, 2, &print_f);
	std::cout << "==============" << std::endl;
	iter(fIterS, 1, &print_f);

	return 0;
}
