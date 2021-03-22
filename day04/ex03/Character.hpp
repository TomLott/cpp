#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : ICharacter{
public:
				Character();
				~Character();
				Character(Character const & src);
				Character & operator = (Character const & src);

};


#endif
