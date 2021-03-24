#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <string>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
private:
	AMateria();
protected:
	unsigned int _xp;
	std::string		_type;
public:
	virtual ~AMateria();
	AMateria(std::string const & type);
	AMateria(AMateria const & src);
	AMateria & operator = (AMateria const & src);

	std::string const & getType() const; //Returns the materia type
	unsigned int getXP() const; //Returns the Materia's XP

	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);



};

#endif
