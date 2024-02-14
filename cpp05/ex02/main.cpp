#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main()
{
	{
		try
		{
			AForm *form1 = new ShrubberyCreationForm("target");
			Bureaucrat bob("Bob", 1);
			bob.signForm(*form1);
			form1->execute(bob);
		}
		catch(std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
	}
}