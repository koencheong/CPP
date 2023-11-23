#include "Harl.hpp"

Harl::Harl()
{
	// constructor
}

Harl::~Harl()
{
	// destructor
}

void Harl::debug()
{
	std::cout << "[ DEBUG ]" << std::endl
			  << "I love having extra bacon for my "
			  << "7XL-double-cheese-triple-pickle-special-ketchup burger. " << std::endl
			  << "I really do!" << std::endl
			  << std::endl;
}

void Harl::info()
{
	std::cout << "[ INFO ]" << std::endl
			  << "I cannot believe adding extra bacon costs more money."
			  << "You didn't put enough bacon in my burger!" << std::endl
			  << "If you did, I wouldn't be asking for more!" << std::endl
			  << std::endl;
}

void Harl::warning()
{
	std::cout << "[ WARNING ]" << std::endl
			  << "I think I deserve to have some extra bacon for free." << std::endl
			  << "I've been coming for years whereas you started working here since last month." << std::endl
			  << std::endl;
}

void Harl::error()
{
	std::cout << "[ ERROR ]" << std::endl
			  << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
	/*
	const		std::string level_list[4] = {"debug", "info", "warning", "error"};
	static void	(Harl::*complaints[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	for (int i = 0; i < 4; i++)
	{
		if (level == level_list[i])
			(this->*complaints[i])();
	}
	*/

	// using typedef
	typedef void funcPtrs(void);

	const			std::string level_list[4] = {"debug", "info", "warning", "error"};
	static funcPtrs	Harl::*complaints[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	for (int i = 0; i < 4; i++)
	{
		if (level == level_list[i])
			(this->*complaints[i])();
	}
}
