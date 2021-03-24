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
			delete _aMateria[i];
	}

}

Character::Character(Character const & src){
    if (this != &src){
        *this = src;
    }
}

Character & Character::operator = (Character const & src){
    if (this != &src){
        this->_count = src._count;

        for (int i = 0; i < 4; i++){
            if (_aMateria[i])
				delete _aMateria[i];
			_aMateria[i] = nullptr;
            }
        int i = 0;
        while (_aMateria[i])
            _aMateria[i] = src._aMateria[i];
    }
    return (*this);
}

void Character::equip(AMateria *m){
    if (!m)
        std::cout << "Materia doesn't exist" << std::endl;
	else if (_count < 4){
        for (int i = 0; i < 4; i++){
            if (m == this->_aMateria[i]){
                std::cout << "This materia was already equiped" << std::endl;
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
            delete _aMateria[idx];
            _aMateria[idx] = nullptr;
        }
    }
}

void Character::use(int idx, ICharacter & target){
    if (idx >= 0 && idx < 4 && _aMateria[idx]){
        _aMateria[idx]->use(target);}
}

std::string const & Character::getName() const{
    return (this->_name);
}