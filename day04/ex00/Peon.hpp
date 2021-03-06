#ifndef PEON_HPP
#define PEON_HPP

#include "Victim.hpp"

class Peon : public Victim{
private:
			Peon();

public:
			Peon(const std::string & name);
			~Peon();
			Peon(Peon const & src);
			Peon & operator = (Peon const & src);
			virtual void getPolymorphed() const;


};


#endif