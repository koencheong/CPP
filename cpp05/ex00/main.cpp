#include "Bureaucrat.hpp"

int	main()
{
	{
		try
		{
			Bureaucrat test("Test", 15);
			std::cout << test << std::endl;
			test.decrementGrade();
			std::cout << test << std::endl;
			test.incrementGrade();
			test.incrementGrade();
			std::cout << test << std::endl;
		}
		catch(const Bureaucrat::GradeTooHighException& e)
		{
			std::cout << e.what() << std::endl;
		}
		catch(const Bureaucrat::GradeTooLowException& e)
		{
			std::cout << e.what() << std::endl;
		}
	}

	std::cout << std::endl;

	{
		try
		{
			Bureaucrat another("Another", 1);
			std::cout << another << std::endl;
			another.incrementGrade();
			std::cout << another << std::endl;
		}
		catch(const Bureaucrat::GradeTooHighException& e)
		{
			std::cout << e.what() << std::endl;
		}
		catch(std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
	}
}