#include <iostream>
#include "Fixed.hpp"

int main() 
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;

	std::cout << "-----------------------" << std::endl;

	Fixed const c( Fixed( 3.0f ) + Fixed ( 2 ) );
	std::cout << "c is " << c << std::endl;

	Fixed const d( Fixed( 3.0f ) / Fixed ( 2 ) );
	std::cout << "d is " << d << std::endl;

	Fixed const e( Fixed( 3.0f ) - Fixed ( 2 ) );
	std::cout << "e is " << e << std::endl;

	Fixed const f( Fixed( 3.0f ) - Fixed ( 4 ) );
	std::cout << "f is " << f << std::endl;

	std::cout << "-----------------------" << std::endl;
	
	Fixed g;

	std::cout << g << std::endl;
	std::cout << --g << std::endl;
	std::cout << g << std::endl;
	std::cout << g-- << std::endl;
	std::cout << g << std::endl;

	std::cout << "-----------------------" << std::endl;

	Fixed j;
	Fixed k;

	j.setRawBits(8);
	k.setRawBits(3);
	if (j > k)
		std::cout << "j > k" << std::endl;
	else
		std::cout << "j < k" << std::endl;
	
	std::cout << "-----------------------" << std::endl;

	Fixed h;
	Fixed i;

	h.setRawBits(10);
	i.setRawBits(15);
	if (h < i)
		std::cout << "h < i" << std::endl;
	else
		std::cout << "h > i" << std::endl;
	
	std::cout << "-----------------------" << std::endl;

	Fixed l;
	Fixed m;

	l.setRawBits(10);
	m.setRawBits(10);
	if (l == m)
		std::cout << "l == m" << std::endl;
	else
		std::cout << "l != m" << std::endl;

	return 0;
}