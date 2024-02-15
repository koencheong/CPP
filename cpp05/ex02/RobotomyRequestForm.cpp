#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("Robotomy Request Form", 72, 45), _target("Default")
{
	// Default constructor
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : AForm("Robotomy Request Form", 72, 45), _target(target) 
{
	// Parameterized constructor
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	// Destructor
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other) : AForm("Robotomy Request Form", 72, 45), _target(other._target) 
{
	// Won't do anything since the variables are constant
	(void)other;
}
		
RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other)
{
	(void)other;
	return (*this);
}

void	RobotomyRequestForm::execute(Bureaucrat const& executor) const
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

	std::cout << "* Making clanking, whirring, and buzzing noises *" << std::endl;

	srand(time(NULL));
	int result = rand() % 2;
	std::cout << _target << (result == 1 ? " has been robotomized! [SUCCESSFUL]" : " remains unrobotomized... [FAILED]") << std::endl;
}