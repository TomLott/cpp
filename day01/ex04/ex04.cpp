#include <string>
#include <iostream>

int main(){
	std::string s1= "HI THIS IS BRAIN";
	std::string *p;
	p  = &s1;
	std::string &r = s1;

	std::cout << "pointer: " << *p << std::endl;
	std::cout << "reference: " << r  << std::endl;

//	std::string temp = "lol";
//	*p = temp;
//	std::string temp = "lol";
//	r = "lol";

	std::cout << "pointer: " << *p << std::endl;
	std::cout << "reference: " << r  << std::endl;

}
