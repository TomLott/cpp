#include "AMateria.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

void 	copy_test();

int main()
{

	copy_test();


/*
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
    delete src;*/
    return 0;


}

void 	copy_test(){
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	Character* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);

	AMateria* tmp2 = src->createMateria("cure");
	std::cout << "======================" << std::endl ;
	me->equip(tmp2);


	Character you(*me);

	me->unequip(0);

	std::cout << "====Me attacks you====" << std::endl;
	me->use(0, you); //---empty
	me->use(1, you); //-- not empty

	std::cout << "====You attacks me====" << std::endl;
	you.use(0, *me);
	you.use(1, *me);

	std::cout << "++++++" << std::endl ;

	delete me;
}