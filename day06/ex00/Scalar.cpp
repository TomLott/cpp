#include "Scalar.hpp"

#include <iostream>
#include <string>
#include <iomanip>

Scalar::Scalar() {

}

Scalar::~Scalar() {

}

Scalar::Scalar(std::string & num) : _num(num) {
}

void Scalar::toChar() {
	int c;

	try {
		c = stoi(_num);
	}
	catch (std::exception &e) {
		std::cerr << "char: impossible" << std::endl;
		return ;
	}
	if (c < 32 || c >= 127){
		std::cout << "char: Non displayable" << std::endl;
	}
	else {
		std::cout << "char: '" << static_cast<char>(c) << "'" << std::endl;
	}
}

void Scalar::toInt(){
	int i;

	try {
		i = stoi(_num);
	}
	catch (std::exception &e) {
		std::cerr << "int: impossible" << std::endl;
		return ;
	}
	std::cout << "int: " << static_cast<int>(i) << std::endl;
}

void Scalar::toFloat() {
	float f;

	try {
		f = std::stof(_num);
	}
	catch (std::exception &e){
		std::cerr << "float: nanf" << std::endl;
		return;
	}
	std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(f) << "f" << std::endl;
}

void Scalar::toDouble() {
	double d;

	try {
		d = std::stod(_num);
	}
	catch (std::exception & e){
		std::cerr << "double: nan" << std::endl;
		return ;
	}
	std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(d) << std::endl;
}

Scalar::Scalar(const Scalar &src) {
	if (this != &src){
		_num = src._num;
	}
}

Scalar & Scalar::operator=(const Scalar &src) {
	if (this != &src) {
		_num = src._num;
	}
	return (*this);
}