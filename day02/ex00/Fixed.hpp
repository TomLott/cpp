
#ifndef EX00_FIXED_HPP
#define EX00_FIXED_HPP
#include <iostream>

class Fixed {
public:
	Fixed();
	~Fixed();
	Fixed(Fixed const & src);
	Fixed &operator = (Fixed const & rhs);

	int 	getRawBits(void) const;
	void 	setRawBits(int const raw);

private:
	int 				_fpv;
	static const int	 _fractionalBits = 8;

};


#endif //EX00_FIXED_HPP
