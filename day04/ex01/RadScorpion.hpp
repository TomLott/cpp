#ifndef RADSCORPION_HPP
#define RADSCORPION_HPP

#include "Enemy.hpp"
#include <iostream>

class RadScorpion : public Enemy{
public:
			RadScorpion();
			~RadScorpion();
			RadScorpion(RadScorpion const &src);
			RadScorpion & operator = (RadScorpion const &src);
};


#endif
