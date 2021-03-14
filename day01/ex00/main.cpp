#include "Pony.hpp"

static void ponyOnTheHeap(std::string s){
	Pony* pony2 = new Pony(s);
	std::cout << "Hey, now you have pony named " << pony2->getName() << std::endl;
	pony2->fly();
	delete pony2;
}

static void ponyOnTheStack(std::string s){
	Pony pony1 = Pony(s);
	std::cout << "Hey, now you have pony named " <<  pony1.getName() << std::endl;
	pony1.fly();
}

int main(){
	ponyOnTheHeap("Barnary");
	ponyOnTheStack("Florence");
	return(0);
}