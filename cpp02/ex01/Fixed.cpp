#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	_num = 0;
}

Fixed::Fixed(const int _intNum)
{
	std::cout << "Int constructor called" << std::endl;
	_num = _intNum << _bits;
}

Fixed::Fixed(const float _floatNum)
{
	std::cout << "Float constructor called" << std::endl;
	_num = roundf(_floatNum * static_cast<float>(1 << _bits));
}

Fixed::Fixed(const Fixed& other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed& Fixed::operator=(const Fixed& other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		_num = other.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int		Fixed::getRawBits(void) const
{
	return (_num);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	_num = raw;
}

float	Fixed::toFloat(void) const
{
	return (static_cast<float>(_num) / static_cast<float>(1 << _bits));
}

int	Fixed::toInt(void) const
{
	return (static_cast<int>(_num) >> _bits);
}

std::ostream &operator<<(std::ostream &out, const Fixed &value)
{
	out << value.toFloat();
	return (out);
}

/* Conversion to and from floating-point (Wikipedia)
To convert a number from floating point to fixed point, 
one may multiply it by the scaling factor S, then round 
the result to the nearest integer. 
Care must be taken to ensure that the result fits in the 
destination variable or register. 
Depending on the scaling factor and storage size, and on 
the range input numbers, the conversion may not entail any rounding.

To convert a fixed-point number to floating-point, 
one may convert the integer to floating-point and then
divide it by the scaling factor S. 
This conversion may entail rounding if the integer's 
absolute value is greater than 224 
(for binary single-precision IEEE floating point) or 
of 253 (for double-precision). Overflow or underflow 
may occur if |S| is very large or very small, respectively. */