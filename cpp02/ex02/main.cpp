#include <iostream>
#include "Fixed.hpp"

int main() 
{
	// Fixed a;
	// Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	// std::cout << a << std::endl;
	// std::cout << b << std::endl;

	Fixed const c( 6.66783f );
	Fixed const d( 6.66782f );

	if (c > d)
		std::cout << "c > d" << std::endl;
	else
		std::cout << "c < d" << std::endl;
	
	return 0;
}