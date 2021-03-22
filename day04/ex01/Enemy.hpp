#ifndef ENEMY_HPP
#define ENEMY_HPP

#include <string>
#include <iostream>

class Enemy {
private:
			int 		_hp;
			std::string _type;
protected:
			Enemy();
public:
			Enemy(int hp, std::string const & type);
			virtual ~Enemy();
			std::string virtual getType() const;
			int getHP() const;
			void setHP(int n);

			Enemy(Enemy const & src);
			Enemy & operator = (Enemy const & src);

			virtual void takeDamage(int);
};


#endif
