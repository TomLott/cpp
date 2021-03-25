#include "Peon.hpp"
#include "Sorcerer.hpp"
#include "Victim.hpp"

int main()
{
	{
		Sorcerer robert("Robert", "the Magnificent");
		Victim jim("Jimmy");
		Peon joe("Joe");
		std::cout << robert << jim << joe;
		robert.polymorph(jim);
		robert.polymorph(joe);
	}
	{
		std::cout << "+++++++++++" << std::endl;
		std::cout << "+++++++++++" << std::endl;

		Sorcerer joj("Joj", "the Lazy");
		Victim pop("Pop");
		Victim lol("lol");
		pop.getPolymorphed();
		lol.getPolymorphed();
	}
	{

	}
	return 0;
}