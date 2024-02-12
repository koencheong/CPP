#include "Form.hpp"

Form::Form() : _name("Default"), _isSigned(false), _gradeToSign(150), _gradeToExec(150)
{
	// std::cout << "Form default constructor called" << std::endl;
}
		
Form::Form(const std::string name, const int gradeToSign, const int gradeToExec) : _name(name), _isSigned(false), _gradeToSign(gradeToSign), _gradeToExec(gradeToExec)
{
	if (gradeToSign < 1 || gradeToExec < 1)
		throw Form::GradeTooHighException();
	if (gradeToSign > 150 || gradeToExec > 150)
		throw Form::GradeTooLowException();
	// std::cout << "Form parameterized constructor called" << std::endl;
}
	
Form::Form(const Form& other) : _name(other._name), _isSigned(false), _gradeToSign(other._gradeToSign), _gradeToExec(other._gradeToExec)
{
	// std::cout << "Form copy constructor called" << std::endl;
	*this = other;
}
		
Form& Form::operator=(const Form& other)
{
	// std::cout << "Form assignment operator called" << std::endl;
	if (this != &other)
		this->_isSigned = other.getIsSigned();
	return (*this);
}

Form::~Form()
{
	// std::cout << "Form destructor called" << std::endl;
}
	
// Getters for all the attributes
std::string Form::getName() const
{
	return (_name);
}

bool Form::getIsSigned() const
{
	return (_isSigned);
}

int	Form::getGradeToSign() const
{
	return (_gradeToSign);
}

int	Form::getGradeToExec() const
{
	return (_gradeToExec);
}

void Form::beSigned(const Bureaucrat& bureaucrat)
{
	if (bureaucrat.getGrade() <= getGradeToSign())
		_isSigned = true;
	else
		throw Form::GradeTooLowException();
}

std::ostream& operator<<(std::ostream& output, const Form& f)
{
	output 
		<< std::endl
		<< "----- " << f.getName() << "'s Information -----" << std::endl
		<< "1. The form is " << (f.getIsSigned() == true ?"signed.":"not signed.")
		<< std::endl << "2. Grade required to sign: " << f.getGradeToSign()
		<< std::endl << "3. Grade required to execute: " << f.getGradeToExec()
		<< std::endl;
	return (output);
}