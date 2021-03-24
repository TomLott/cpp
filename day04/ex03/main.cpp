#include "AMateria.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main()
{
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    ICharacter* me = new Character("me");
    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);

    std::cout << tmp->getType() << " is type after creating ice" << std::endl;
    std::cout << "_____________" << std::endl;
    tmp = src->createMateria("cure");
    me->equip(tmp);
	std::cout << tmp->getType() << " is type after creating cure" << std::endl;
	std::cout << "_____________" << std::endl;

    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);

    std::cout << "______________" << std::endl;
	std::cout << "materia exp: " << tmp->getXP() << std::endl;
	me->unequip(0);
	me->use(0, *bob);
	std::cout << "materia exp: " << tmp->getXP() << std::endl;
	me->use(1, *bob);
	std::cout << "materia exp: " << tmp->getXP() << std::endl;
	me->use(1, *bob);
	std::cout << "materia exp: " << tmp->getXP() << std::endl;
	me->unequip(-1);

    delete bob;
    delete me;
    delete src;
    return 0;
}