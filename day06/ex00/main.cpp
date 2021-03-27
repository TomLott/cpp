#include "Scalar.hpp"

int main(int argc, char **argv){
	std::string num;

	if (argc == 2){
		num = argv[1];
		Scalar s(num);
		s.toChar();
		s.toInt();
		s.toFloat();
		s.toDouble();
	}
}
