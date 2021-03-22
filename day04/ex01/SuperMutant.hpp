#ifndef SUPERMUTANT_HPP
#define SUPERMUTANT_HPP

#include "Enemy.hpp"

class SuperMutant : public Enemy {
private:
public:
			SuperMutant();
			~SuperMutant();
			SuperMutant(SuperMutant const & src);
			SuperMutant & operator = (SuperMutant const & src);

			virtual void takeDamage(int);



};


#endif
