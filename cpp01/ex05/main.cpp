#include <iostream>

class Harl
{
	public:
		Harl();
		~Harl();
		void complain(std::string level);
	
	private:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
};

Harl::Harl()
{
	std::cout << "Harl is constructed" << std::endl;
}

Harl::~Harl()
{
	std::cout << "Harl is destructed" << std::endl;
}

void Harl::debug()
{
	std::cout << "[ DEBUG ]" << std::endl
			  << "I love having extra bacon for my "
			  << "7XL-double-cheese-triple-pickle-special-ketchup burger. "
			  << "I really do!" << std::endl;
}

void Harl::info()
{
	std::cout << "[ INFO ]" << std::endl
			  << "I cannot believe adding extra bacon costs more money." << std::endl
			  << "You didn't put enough bacon in my burger!" << std::endl
			  << "If you did, I wouldn't be asking for more!" << std::endl;
}

void Harl::warning()
{
	std::cout << "[ WARNING ]" << std::endl
			  << "I think I deserve to have some extra bacon for free." << std::endl
			  << "I've been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error()
{
	std::cout << "[ ERROR ]" << std::endl
			  << "This is unacceptable! I want to speak to the manager now." << std::endl;
}


