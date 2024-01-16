#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	public:
		Fixed();
		Fixed(const int _intNum);
		Fixed(const float _floatNum);
		Fixed(const Fixed& other);
		Fixed& operator=(const Fixed& other);
		~Fixed();
		int		getRawBits(void) const; //constant member function
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
	
	private:
		int	_num;
		static const int _bits = 8;
};

std::ostream &operator<<(std::ostream &out, const Fixed &value);

#endif