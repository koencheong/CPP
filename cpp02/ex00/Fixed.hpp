#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
	public:
		Fixed();
		Fixed(const Fixed& other);
		// Fixed& operator=(const Fixed& other);
		~Fixed();
		// int		getRawBits(void) const; //constant member function
		// void	setRawBits(int const raw);
	
	private:
		// int	fpValue;
		// static const int bits = 8;
};

// constant member functions: functions that are denied permission
// to change the values of the data members of their class.

#endif