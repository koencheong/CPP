#include "Form.hpp"

int	main()
{
	{
		try
		{
			Form form1("Form1", 18, 18);
			std::cout << form1 << std::endl;
			Bureaucrat koen("Koen", 20);
			koen.signForm(form1);

			Form form2("Form2", 55, 55);
			std::cout << form2 << std::endl;
			Bureaucrat bob("Bob", 10);
			bob.signForm(form2);
		}
		catch(std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
}