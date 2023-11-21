#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : weapon(weapon), name(name)
{
	std::cout << name << " object constructed" << std::endl;
}

HumanA::~HumanA()
{
	std::cout << name << " object destructed" << std::endl;
}

void HumanA::attack()
{
	std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}
