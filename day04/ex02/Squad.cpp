#include "Squad.hpp"

Squad::Squad() : _count(0) {
	for (int i = 0; i < 4; i++){
		_marine[i] = nullptr;
	}
}

Squad::~Squad()  {
	for (int i = 0; i < _count; i++)
		delete _marine[i];
}

int Squad::getCount() const {
	return (_count);
}

ISpaceMarine * Squad::getUnit(int i) const {
	if (i < 0 || _count == 0 || i >= _count)
		return (nullptr);
	return (_marine[i]);
}

int Squad::push(ISpaceMarine *new_sm) {
	if (!new_sm)
		;
	else if (_count >= 4)
		return (4);
	else if (_count < 0)
		return (_count);
	else {
		for (int i = 0; i < _count; i++){
			if (_marine[i] == new_sm)
				return (_count);
		}
		_marine[_count++] = new_sm;
	}
	return (_count);
}

Squad::Squad(const Squad &src) {
	if (this != &src){
		*this = src;
	}
}

Squad & Squad::operator=(const Squad &src) {
	if (this != &src) {
		for (int i = 0; i < 4; i++){
			if (_marine[i]) {
				delete _marine[i];
				_marine[i] = nullptr;
			}
		}
		for (int i = 0; i < 4; i++) {
			_marine[i] = (src._marine[i])->clone();
		}
		_count = src._count;
	}
	return (*this);
}
