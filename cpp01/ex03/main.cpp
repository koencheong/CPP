/*
A reference in C++ is an alias or alternative name for an existing object. 
It provides a way to access the same object using a different name. 
Unlike a pointer, a reference must always refer to an existing object and cannot be null. 
When you modify a reference, you are modifying the original object it refers to.

A reference is not a copy of the value; it's essentially another name for the same variable. 
When you pass a variable by reference to a function or use a reference as a function
parameter, you're allowing the function to work directly with the original variable, not a copy.*/

#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
	// Weapon club = Weapon("crude spiked club");
	// HumanA bob("Bob", club);
	// bob.attack();
	// club.setType("some other type of club");
	// bob.attack();

	Weapon club = Weapon("crude spiked club");
	HumanB jim("Jim");
	jim.setWeapon(club);
	jim.attack();
	club.setType("some other type of club");
	jim.attack();
	// system ("leaks a.out");
	return 0;
}
