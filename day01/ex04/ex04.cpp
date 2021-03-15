#include <string>
#include <iostream>

int main(){
	std::string s1= "HI THIS IS BRAIN";
	std::string *p = &s1;
	std::string &r = s1;

	std::cout << "pointer: " << *p << std::endl;
	std::cout << "reference: " << r  << std::endl;
}
