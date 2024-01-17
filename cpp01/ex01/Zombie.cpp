#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << this->name << "A zombie is created." << std::endl;
}

Zombie::~Zombie()
{
	std::cout << this->name << " get destroyed." << std::endl;
}

void	Zombie::announce()
{
	std::cout << this->name;
	std::cout << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(std::string name)
{
	this->name = name;
}
