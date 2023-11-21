#include "HumanB.hpp"

HumanB::HumanB(std::string name) : weapon(NULL), name(name)
{
	std::cout << name << " object constructed" << std::endl;
}

HumanB::~HumanB()
{
	std::cout << name << " object destructed" << std::endl;
}

void HumanB::attack()
{
	if (weapon != NULL)
		std::cout << name << " attacks with their " << weapon->getType() << std::endl;
	else
		std::cout << name << " is unarmed" << std::endl;
}

void HumanB::setWeapon(Weapon& newWeapon)
{
	delete weapon;	
	weapon = &newWeapon;
}
