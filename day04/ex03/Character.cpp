#include "Character.hpp"


Character::Character() {
    _count = 0;
	for (int i = 0; i < 4; i++){
		_aMateria[i] = nullptr;
	}
    _name = nullptr;
}

Character::Character(std::string const & name){
    _name = name;
    _count = 0;
    for (int i = 0; i < 4; i++){
		_aMateria[i] = nullptr;
	}
}

Character::~Character() {
	for (int i = 0; i < 4; i++){
		if (_aMateria[i])
			_aMateria[i] = nullptr;

	}

}

Character::Character(Character const & src){
	_count = src._count;
	this->_name = src._name;
	for (int i = 0; i < 4; i++)
		if (src._aMateria[i])
			_aMateria[i] = src._aMateria[i];
		else
			_aMateria[i] = nullptr;
}

Character & Character::operator = (Character const & src){
    if (this != &src){
    	this->_name = src._name;
        this->_count = src._count;
        for (int i = 0; i < 4; i++){
            if (src._aMateria[i]) {
				delete _aMateria[i];
				_aMateria[i] = nullptr;
			}
        }
		for (int i = 0; i < 4; i++)
			if (src._aMateria[i])
				_aMateria[i] = src._aMateria[i]->clone();
    }
    return (*this);
}

void Character::equip(AMateria *m){
    if (!m)
        std::cout << "Materia doesn't exist" << std::endl;
	else if (_count < 4){
        for (int i = 0; i < 4; i++){
            if (m == _aMateria[i]){
                return ;
            }
        }
		_aMateria[_count++] = m;
	}
	else{
		std::cout << "Container is already full." << std::endl;
	}
}


void Character::unequip(int idx){
    if (idx >= 0 && idx < 4){
        if (_aMateria[idx]){
            _aMateria[idx] = nullptr;
        }
    }
}

void Character::use(int idx, ICharacter & target){
    if (idx >= 0 && idx < 4 && _aMateria[idx]){
        _aMateria[idx]->use(target);
    }
}

std::string const & Character::getName() const{
    return (this->_name);
}