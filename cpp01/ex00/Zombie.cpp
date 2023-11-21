#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->name = name;
	std::cout << this->name << " constructor called." << std::endl;
}

Zombie::~Zombie()
{
	std::cout << this->name << " destructor called." << std::endl;
}

void	Zombie::announce()
{
	std::cout << this->name;
	std::cout << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
