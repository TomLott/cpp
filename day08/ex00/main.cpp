#include <vector>
#include "easyfind.hpp"
#include <iostream>
#include <set>

void ft_vector();
void ft_set();

int main() {

	ft_vector();
	//ft_set();


}
void ft_vector() {
	std::vector<int> nums;

	nums.push_back(1);
	nums.push_back(2);
	nums.push_back(3);
	nums.push_back(4);

	std::cout << *easyfind(nums, 4) << std::endl;
	std::cout << *easyfind(nums, 3) << std::endl;
	std::cout << *easyfind(nums, 2) << std::endl;
	std::cout << *easyfind(nums, 1) << std::endl;

	try {
		std::cout << *easyfind(nums, 5) << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}


void ft_set(){

	std::set<int> s;

	for (int  i = 0; i < 5; i++){
		s.insert(i);
	}

	std::cout << *easyfind(s, 4) << std::endl;
	std::cout << *easyfind(s, 2) << std::endl;
	std::cout << *easyfind(s, 1) << std::endl;
	try{
		std::cout << *easyfind(s, 100) << std::endl;
	}
	catch (std::exception & e){
		std::cout << e.what() << std::endl;
	}


}