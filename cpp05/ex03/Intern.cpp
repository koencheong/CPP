#include "Intern.hpp"

Intern::Intern() {}
	
Intern::Intern(const Intern& other)
{
	(void)other;
}
		
Intern& Intern::operator=(const Intern& other)
{
	(void)other;
	return (*this);
}

Intern::~Intern() {}

AForm*	Intern::makeForm(const std::string formName, const std::string target)
{
	const std::string formType[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	AForm *newForm = NULL;

	for (int i = 0; i < 3; i++)
	{
		if (formName == formType[i])
		{
			switch (i)
			{
				case 0:
					newForm = new ShrubberyCreationForm(target);
					break;
				case 1:
					newForm = new RobotomyRequestForm(target);
					break;
				case 2:
					newForm = new PresidentialPardonForm(target);
					break;
			}
		}
	}

	if (newForm != NULL)
	{
		std::cout << "Intern creates " << newForm->getName() << std::endl;
		return (newForm);
	}
	else
		throw Intern::FormNotFound();
}