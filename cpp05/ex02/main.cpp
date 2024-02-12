#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main()
{
	{
		try
		{
			AForm *form1 = new ShrubberyCreationForm("target");
			std::cout << form1 << std::endl;
		}
		catch(std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
	}
}