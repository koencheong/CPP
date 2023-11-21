#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon
{
	public:
		Weapon(const std::string &initialType);
		Weapon();
		~Weapon();
		const	std::string getType();
		void	setType(std::string type);

	private:
		std::string	type;
};

#endif