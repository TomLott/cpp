//
// Created by India Tollett on 3/14/21.
//

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <string>
#include <iostream>


class Zombie{
public:
	Zombie();
	Zombie(std::string name, std::string type);
	~Zombie();
	void announce();

	void setName(const std::string &name);
	void setType(const std::string &type);
	const std::string &getName() const;
	const std::string &getType() const;

private:
	std::string _name;
	std::string _type;

};

#endif
