#ifndef SQUAD_HPP
#define SQUAD_HPP

#include "ISquad.hpp"
#include <string>

class Squad : public ISquad{
private:
	int     _count;
	ISpaceMarine *_marine[4];
public:
	Squad();
	virtual ~Squad();
	int getCount() const;
	ISpaceMarine * getUnit(int) const;
	int push(ISpaceMarine *);

	Squad(Squad const & src);
	Squad & operator = (Squad const & src);


};


#endif
