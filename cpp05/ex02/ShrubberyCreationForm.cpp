#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("Shrubbery Creation Form", 145, 137), _target("Default")
{
	// Default constructor
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : AForm("Shrubbery Creation Form", 145, 137), _target(target) 
{
	// Parameterized constructor
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	// Destructor
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other) : AForm("Shrubbery Creation Form", 145, 137), _target(other._target) 
{
	// Won't do anything since the variables are constant
	(void)other;
}
		
ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other)
{
	(void)other;
	return (*this);
}

void	ShrubberyCreationForm::execute(Bureaucrat const& executor) const
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

	std::string filename = _target + "_shrubbery";
	std::ofstream shrubberyFile(filename.c_str());
	if (!shrubberyFile.is_open())
	{
		std::cout << "Opps! Couldn't find a place to plant ur shrubbery tree... " << std::endl;
		return ;
	}

	shrubberyFile << "Here is ur shrubbery tree!! 🍓" << std::endl;
	shrubberyFile << std::endl;
	shrubberyFile << std::string(9, ' ') + "><" << std::endl;
	for (int i = 0; i < 9; ++i)
		shrubberyFile << std::string(9 - i, ' ') + '/' + std::string(2 * i, '*') + '\\' << std::endl;
	shrubberyFile << "'" + std::string(18, '-') + "`" << std::endl;
	shrubberyFile << std::string(9, ' ') + "||" << std::endl;

	std::cout << executor.getName() << ": You've planted a shrubbery tree! Go check out ur shrubbery tree 🍓🍓" << std::endl;

	shrubberyFile.close();
}