#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
}

// 
Fixed::Fixed(const Fixed& other)
{
	*this = other;
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::Fixed& operator=(const Fixed& other)
{
	if (this != )
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}