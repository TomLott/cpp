#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"
#include <string>
#include <iostream>

class Cure : public AMateria{
public:
			Cure();
			~Cure();
			Cure(Cure const & src);
			Cure & operator = (Cure const & src);

			AMateria* clone() const;
			void use(ICharacter& target);
};


#endif
