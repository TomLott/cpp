#ifndef VICTIM_HPP
#define VICTIM_HPP

#include <string>
#include <iostream>

class Victim {
protected:
	Victim();
private:
	std::string _name;
public:
	Victim(std::string const & name);
	virtual ~Victim();

	Victim(Victim const &src);
	Victim & operator = (Victim const & src);
	std::string getName() const;

	virtual void getPolymorphed() const;
};

std::ostream & operator << (std::ostream & o, Victim & src);
#endif
