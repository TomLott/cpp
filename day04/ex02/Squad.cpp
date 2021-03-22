#include "Squad.hpp"

Squad::Squad() : _count(0), _marine(nullptr) {

}

Squad::~Squad()  {
	if (_marine){
		for (int i = 0; i < _count; i++)
			delete _marine[i];
	}
	delete [] _marine;
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
	else if (!_marine){
		_marine = new ISpaceMarine*[1];
		_marine[0] = new_sm;
		_count = 1;
	}
	else {
		for (int i = 0; i < _count; i++){
			if (_marine[i] == new_sm)
				return (_count);
		}
		ISpaceMarine ** temp = new ISpaceMarine*[_count + 1];
		for (int i = 0; i < _count; i++){
			temp[i] = _marine[i];
		}
		temp[_count++] = new_sm;
		delete [] _marine;
		_marine = temp;
	}
	return (_count);
}

Squad::Squad(const Squad &src) {
	if (this != &src){
		_marine = src._marine;
		_count = src._count;
	}
}

Squad & Squad::operator=(const Squad &src) {
	if (this != &src){
		_marine = src._marine;
		_count = src._count;
	}
	return (*this);
}
