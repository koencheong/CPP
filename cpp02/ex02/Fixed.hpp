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
		int		getRawBits(void) const; // constant member function
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;

		// ******* operator overloading *******
		// arithmetic operators
		Fixed	operator+ (const Fixed &right) const;
		Fixed	operator- (const Fixed &right) const;
		Fixed	operator* (const Fixed &right) const;
		Fixed	operator/ (const Fixed &right) const;

		// comparison operators
		bool	operator> (const Fixed &right) const;
		bool	operator< (const Fixed &right) const;
		bool	operator>= (const Fixed &right) const;
		bool	operator<= (const Fixed &right) const;
		bool	operator== (const Fixed &right) const;
		bool	operator!= (const Fixed &right) const;

		// increment/decrement operators
		// prefix increment ++i
		Fixed	operator++();
		// postfix increment i++
		Fixed	operator++(int); // The int parameter itself is 
								// a dummy parameter and is not
								// used in the implementation of
								// the operator. Its presence is 
								// a convention to differentiate 
								// between the two versions of the
								// increment operator. When you see
								// int as a parameter in the postfix
								// increment operator, it's just a 
								// marker to tell the compiler which 
								// version to use. The value passed 
								// as the int parameter is ignored in
								// the implementation.
		// prefix decrement --i
		Fixed	operator--();
		// postfix decrement i--
		Fixed	operator--(int);

		// ******* public overloaded member functions *******
		static Fixed&	min(Fixed& a, Fixed &b);
		const static Fixed&	min(const Fixed& a, const Fixed &b);
		static Fixed&	max(Fixed& a, Fixed &b);
		const static Fixed&	max(const Fixed& a, const Fixed &b);


	private:
		int	_num;
		static const int _bits = 8;
};

std::ostream &operator<<(std::ostream &out, const Fixed &value);

#endif