#ifndef EX01_FIXED_H
#define EX01_FIXED_H

#include <cmath>
#include <ostream>
#include <string>

class Fixed {
public:
		Fixed();
		~Fixed();
		Fixed(Fixed const & src);
		Fixed(const int param);
		Fixed(const float param);

		Fixed & operator = (Fixed const & rhs);

		float 	toFloat(void) const;
		int		toInt(void) const;

		void 	setRawBits(int const raw);
		int 	getRawBits(void) const;

private:
		int 				_fpv;
		static const int 	_bits = 8;
};

std::ostream & operator<<(std::ostream & o, const Fixed & rhs);
#endif
