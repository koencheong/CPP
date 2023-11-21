#include "Weapon.hpp"

class HumanB
{
	public:
		HumanB(std::string name);
		~HumanB();
		void attack();
		void setWeapon(Weapon& newWeapon);

	private:
		Weapon*			weapon;
		std::string		name;
};
