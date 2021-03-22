#ifndef SORCERER_HPP
#define SORCERER_HPP
#include <string>
#include <iostream>
#include <ostream>

#include "Victim.hpp"

class Sorcerer {
private:
	Sorcerer();
	std::string _name;
	std::string _title;

public:
	Sorcerer(std::string const & name, std::string const & title);
	~Sorcerer();
	Sorcerer(Sorcerer const & src);
	Sorcerer & operator = (Sorcerer const & src);

	std::string getName() const;
	std::string getTitle() const;

	void 	polymorph(Victim const & src) const;
};

std::ostream &operator << (std::ostream &o, const Sorcerer & src);


#endif
