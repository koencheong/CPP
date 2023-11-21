#include <iostream>

class Zombie
{
	public:
		Zombie();
		~Zombie();
		void	announce(void);
		void	setName(std::string name);

	private:
		std::string name;
};

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

Zombie* zombieHorde(int N, std::string name)
{
	Zombie *zombieHorde = new Zombie[N];

	for (int i = 0; i < N; i++)
	{
		zombieHorde[i].setName(name);
	}
	return (zombieHorde);
}

int main()
{
	Zombie *horde;
	
	horde = zombieHorde(5, "Koen");
	for (int i = 0; i < 5; i++)
	{
		horde[i].announce();
	}
	delete[] horde;
}