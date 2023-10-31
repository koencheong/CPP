#include <iostream>

class Zombie
{
	public:
		void	announce(void);
		Zombie*	newZombie(std::string name);
		void	randomChump(std::string name);

	private:
		std::string name;
};

void Zombie::announce()
{
	std::cout << this->name;
	std::cout << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie* Zombie::newZombie(std::string name)
{
	
}

int	main()
{

}