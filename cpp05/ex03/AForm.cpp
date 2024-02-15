#include "AForm.hpp"

AForm::AForm() : _name("Default"), _isSigned(false), _gradeToSign(150), _gradeToExec(150)
{
	// std::cout << "AForm default constructor called" << std::endl;
}
		
AForm::AForm(const std::string name, const int gradeToSign, const int gradeToExec) : _name(name), _isSigned(false), _gradeToSign(gradeToSign), _gradeToExec(gradeToExec)
{
	if (gradeToSign < 1 || gradeToExec < 1)
		throw AForm::GradeTooHighException();
	if (gradeToSign > 150 || gradeToExec > 150)
		throw AForm::GradeTooLowException();
	// std::cout << "AForm parameterized constructor called" << std::endl;
}
	
AForm::AForm(const AForm& other) : _name(other._name), _isSigned(false), _gradeToSign(other._gradeToSign), _gradeToExec(other._gradeToExec)
{
	// std::cout << "AForm copy constructor called" << std::endl;
	*this = other;
}
		
AForm& AForm::operator=(const AForm& other)
{
	// std::cout << "AForm assignment operator called" << std::endl;
	if (this != &other)
		this->_isSigned = other.getIsSigned();
	return (*this);
}

AForm::~AForm()
{
	// std::cout << "AForm destructor called" << std::endl;
}
	
// Getters for all the attributes
std::string AForm::getName() const
{
	return (_name);
}

bool AForm::getIsSigned() const
{
	return (_isSigned);
}

int	AForm::getGradeToSign() const
{
	return (_gradeToSign);
}

int	AForm::getGradeToExec() const
{
	return (_gradeToExec);
}

void	AForm::beSigned(const Bureaucrat& bureaucrat)
{
	if (bureaucrat.getGrade() <= getGradeToSign())
		_isSigned = true;
	else
		throw AForm::GradeTooLowException();
}

std::ostream& operator<<(std::ostream& output, const AForm& f)
{
	output 
		<< std::endl
		<< "----- " << f.getName() << "'s InAformation -----" << std::endl
		<< "1. The Aform is " << (f.getIsSigned() == true ?"signed.":"not signed.")
		<< std::endl << "2. Grade required to sign: " << f.getGradeToSign()
		<< std::endl << "3. Grade required to execute: " << f.getGradeToExec()
		<< std::endl;
	return (output);
}

void	AForm::execute(Bureaucrat const& executor) const
{
	(void)executor;
	std::cout << "I'm just a template. I don't execute anything here!" << std::endl;
}