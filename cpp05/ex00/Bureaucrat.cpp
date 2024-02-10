#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	std::cout << "Bureaucrat default constructor called" << std::endl;
}

/* This is wrong bcuz constant variable (const _name) cannot be initialized in constructor.
Bureaucrat::Bureaucrat(const std::string name, int grade)
{
	std::cout << "Bureaucrat constructor called" << std::endl;
	this->_name = name; **** CANNOT
	this->_grade = grade;
} */

// Have to use Member Initializer List to initialize!
Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name), _grade(grade)
{
	std::cout << "Bureaucrat parameterized constructor called" << std::endl;
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat& other)
{
	std::cout << "Bureaucrat copy constructor called" << std::endl;
	*this = other;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other)
{
	std::cout << "Bureaucrat assignment operator called" << std::endl;
	if (this != &other)
		this->_grade = other.getGrade();
	return (*this);
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat destructor called" << std::endl;
}

std::string	Bureaucrat::getName() const
{
	return (_name);
}

int	Bureaucrat::getGrade() const
{
	return (_grade);
}

void	Bureaucrat::incrementGrade()
{
	if (_grade -= 1 < 1)
		throw GradeTooHighException();
	_grade--;
}

void	Bureaucrat::decrementGrade()
{
	if (_grade += 1 > 150)
		throw GradeTooLowException();
	_grade++;
}

/* 
------------- Insertion Operator (<<) Overloading -------------
Allows you to use "cout << Bureaucrat" to display all the information
without having to write a print function like we normally do.
*/
std::ostream& operator<<(std::ostream& output, const Bureaucrat& b)
{
	output << b.getName() << ", bureaucrat grade " << b.getGrade() << ".";
	return (output);
}