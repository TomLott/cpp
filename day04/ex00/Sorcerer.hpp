#ifndef SORCERER_HPP
#define SORCERER_HPP
#include <string>
#include <iostream>
#include <ostream>

class Sorcerer {
private:
	Sorcerer();
	std::string _name;
	std::string _title;

public:
	Sorcerer(std::string const & name, std::string const & title);
	~Sorcerer();
};

ostream & 


#endif
