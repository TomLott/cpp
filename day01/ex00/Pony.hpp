#ifndef PONY_HPP
#define PONY_HPP
#include <string>
#include <iostream>

class Pony {
public:
	Pony(std::string s);
	~Pony();

	void fly();
	const std::string &getName() const;
private:
	std::string _name;

};


#endif //EX00_PONY_H
