#include "Bureaucrat.hpp"

int	main()
{
	try
	{
		Bureaucrat koen("Koen", 150);
		// std::cout << koen << std::endl;
		koen.decrementGrade();
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