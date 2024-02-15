#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("Presidential Pardon Form", 25, 5), _target("Default")
{
	// Default constructor
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : AForm("Presidential Pardon Form", 25, 5), _target(target) 
{
	// Parameterized constructor
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	// Destructor
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other) : AForm("Presidential Pardon Form", 25, 5), _target(other._target) 
{
	// Won't do anything since the variables are constant
	(void)other;
}
		
PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& other)
{
	(void)other;
	return (*this);
}

void	PresidentialPardonForm::execute(Bureaucrat const& executor) const
{
	if (getIsSigned() == false)
	{
		throw AForm::isNotSignedException();
		return ;
	}
	if (executor.getGrade() > getGradeToExec())
	{
		throw Bureaucrat::GradeTooLowException();
		return ;
	}

	std::cout << _target << " has been pardoned by Zaphod Beeblebrox. 🫡" << std::endl;
}