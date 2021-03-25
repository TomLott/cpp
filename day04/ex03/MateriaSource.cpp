#include "MateriaSource.hpp"


MateriaSource::MateriaSource(){
    for (int i = 0; i < 4; i++){
        _aMateria[i] = nullptr;
    }
    _count = 0;
}

MateriaSource::~MateriaSource(){
    for (int i = 0; i < 4; i++){
        if (_aMateria[i])
            delete _aMateria[i];
        _aMateria[i] = nullptr;
    }
}

MateriaSource::MateriaSource(MateriaSource const & src) {
    if (this != &src){
        *this = src;
    }
}

MateriaSource & MateriaSource::operator = (MateriaSource const & src){
    if (this != &src){
        _count = src._count;
        for (int i = 0; i < 4; i++){
            if (_aMateria[i])
                delete _aMateria[i];
            _aMateria[i] = nullptr;
        }
        for (int i = 0; i < 4; i++){
            if (src._aMateria[i])
                this->_aMateria[i] = src._aMateria[i];
        }
    }
    return(*this);
}

void MateriaSource::learnMateria(AMateria * src){
    if (src){
        if (_count < 4){
            _aMateria[_count++] = src;
        }
    }
}

AMateria * MateriaSource::createMateria(std::string const & type){
    for (int i = 0; i < 4; i++){
        if (_aMateria[i] && _aMateria[i]->getType() == type)
            return (_aMateria[i]->clone());
    }
	return (nullptr);
}