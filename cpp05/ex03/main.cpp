#include "Intern.hpp"

int	main()
{
	
	{
		try
		{
			Intern someRandomIntern;
			AForm *rrf;
			Bureaucrat bob("Bob", 1);

			rrf = someRandomIntern.makeForm("robotomy request", "Bender");
			bob.signForm(*rrf);
			bob.executeForm(*rrf);
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
			Intern madIntern;
			AForm *form;
			Bureaucrat jelly("Jelly", 1);

			form = madIntern.makeForm("request", "Jojo");
			jelly.signForm(*form);
			jelly.executeForm(*form);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
}
		