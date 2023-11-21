#include "Weapon.hpp"

Weapon::Weapon(const std::string &initialType) : type(initialType)
{
	std::cout << this->type << " object constructed" << std::endl;
}

Weapon::Weapon() : type("Default")
{
	std::cout << this->type << " object constructed" << std::endl;
}

Weapon::~Weapon()
{
	std::cout << this->type << " object destructed" << std::endl;
}

void	Weapon::setType(std::string newType)
{
	this->type = newType;
}

const std::string Weapon::getType()
{
	return (this->type);
}
