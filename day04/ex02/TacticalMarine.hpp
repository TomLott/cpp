#ifndef TACTICALMARINE_HPP
#define TACTICALMARINE_HPP

#include "ISpaceMarine.hpp"
#include <string>
#include <iostream>


class TacticalMarine : public ISpaceMarine {
private:
public:
	TacticalMarine();
	~TacticalMarine();
	TacticalMarine(TacticalMarine const & src);
	TacticalMarine & operator = (TacticalMarine const & src);

	ISpaceMarine * clone() const;
	void 			battleCry() const;
	void 			rangedAttack() const;
	void			meleeAttack() const;

};


#endif
