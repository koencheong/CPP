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