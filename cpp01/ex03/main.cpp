#include <iostream>

class Weapon
{
	public:
		Weapon(); // constructor
		~Weapon(); // destructor
		const	&type getType();
		void	setType(std::string type);

	private:
		std::string	type;
}

Weapon::Weapon()
{
	std::cout << "Weapon constructor called." << std::endl;
}

void	Weapon::setType(std::string type)
{
	this->type = type;
}

class HumanA
{
	public:
		HumanA(weapon weapon);
		void	attack();

	private:
		Weapon	weapon;
}

HumanA::HumanA : Weapon
{
	
}