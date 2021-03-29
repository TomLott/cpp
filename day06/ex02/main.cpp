#include "Base.hpp"
#include <string>
#include <iostream>


Base *  generate(void){

	srand(time(NULL));

	int i = rand() % 3;

	if (i == 0){
		std::cout << "Base : A" << std::endl;
		return (new A());
	}
	else if (i == 1){
		std::cout << "Base : B" << std::endl;
		return (new B());
	}
	else {
		std::cout << "Base : C" << std::endl;
		return (new C());
	}
}

static void identify_from_pointer(Base * p){
	std::cout << "Pointer: ";
	A *a = dynamic_cast<A *>(p);
	if (a){
		std::cout << "A" << std::endl;
	}
	B *b = dynamic_cast<B *>(p);
	if (b){
		std::cout << "B" << std::endl;
	}
	C *c = dynamic_cast<C *>(p);
	if (c){
		std::cout << "C" << std::endl;
	}
}


static void identify_from_reference(Base & p){
	std::cout << "Reference: ";
	try {
		A &a = dynamic_cast<A &>(p);
		std::cout << "A" << std::endl;
	}
	catch (std::exception &e){}

	try {
		B &b = dynamic_cast<B &>(p);
		std::cout << "B" << std::endl;
	}
	catch (std::exception &e){}

	try {
		C &c = dynamic_cast<C &>(p);
		std::cout << "C" << std::endl;
	}
	catch (std::exception &e){}
}

int main() {
	Base *b = generate();

	identify_from_pointer(b);
	identify_from_reference(*b);

}