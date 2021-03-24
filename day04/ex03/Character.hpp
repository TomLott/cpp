#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"
#include <string>
#include <iostream>


class Character : public ICharacter{
private:
				std::string _name;
				int		 _count;
				AMateria *_aMateria[4];
				Character();
public:
				Character(std::string const & name);
				virtual ~Character();
				Character(Character const & src);
				Character & operator = (Character const & src);

				void equip(AMateria *m);
				void unequip(int idx);
				void use(int idx, ICharacter & target);
				std::string const & getName() const;

};


#endif
