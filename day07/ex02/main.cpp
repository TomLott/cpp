#include "Array.hpp"

int main(){
	Array<int> arrInt(5);
	Array<std::string> list(2);

	list[0] = "lol";
	list[1] = "pop";

	std::cout << "String array content : " << std::endl;
	for (int i = 0; i < list.size(); i++)
		std::cout << "list" << i << " = " << list[i] << std::endl;

	std::cout << "============" << std::endl;

	std::cout << std::endl;

	std::cout << "Copy list :" << std::endl;
	Array<std::string> copy(list);
	list[0] = "joj";
	std::cout << "copy[0] = " << copy[0] << std::endl;
	std::cout << "list[0] = " << list[0] << std::endl;

	std::cout << "============" << std::endl;

	std::cout << std::endl;

	for (int i = 0; i < 5; i++)
		arrInt[i] = i;
	std::cout << "Int array: " << std::endl;
	for (int i = 0; i < arrInt.size(); i++)
		std::cout << "int" << i << " = " << arrInt[i] << std::endl;

	std::cout << std::endl;
	Array<int> arrCopy= arrInt;
	std::cout << "Int arrayCopy: " << std::endl;
	for (int i = 0; i < arrInt.size(); i++)
		std::cout << "arrCopy" << i << " = " << arrCopy[i] << std::endl;

	std::cout << std::endl;
	std::cout << "See out of range : " << std::endl;
	try{
		std::cout << "j = " << arrInt[arrInt.size() + 1] << std::endl;
	}
	catch (std::exception & e){
		std::cout << e.what() << std::endl;
	}


}