#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main()
{
	{
		try
		{
			AForm *form1 = new ShrubberyCreationForm("Strawberry Lover");
			Bureaucrat bob("Bob", 1);
			bob.signForm(*form1);
			bob.executeForm(*form1);
		}
		catch(std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << std::endl;
	{
		try
		{
			AForm *form2 = new RobotomyRequestForm("Freddy");
			Bureaucrat john("John", 7);
			john.signForm(*form2);
			john.executeForm(*form2);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
		
	}
	std::cout << std::endl;
	{
		try
		{
			AForm *form3 = new PresidentialPardonForm("Lily");
			Bureaucrat maggie("Maggie", 26); // Grade to sign is too low (need 25)
			// Bureaucrat maggie("Maggie", 5); // Can
			// Bureaucrat maggie("Maggie", 25); // Can sign but grade to execute is too low (need 5)
			maggie.signForm(*form3);
			maggie.executeForm(*form3);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
}