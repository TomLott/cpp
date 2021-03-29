#ifndef DAY06_SCALAR_HPP
#define DAY06_SCALAR_HPP

#include <string>

class Scalar {

private:
	Scalar();
	std::string _num;

public:
	~Scalar();
	Scalar(std::string & _num);

	Scalar(Scalar const & src);
	Scalar & operator = (Scalar const & src);

	void toChar();
	void toInt();
	void toFloat();
	void toDouble();
};


#endif //DAY06_SCALAR_HPP
