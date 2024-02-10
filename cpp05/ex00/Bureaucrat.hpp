#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
	public:
		Bureaucrat();
		Bureaucrat(const std::string name, int grade);
		~Bureaucrat();
		Bureaucrat(const Bureaucrat& other);
		Bureaucrat& operator=(const Bureaucrat& other);

		std::string	getName() const;
		int 		getGrade() const;
		void		incrementGrade(); // grade 3 becomes grade 2
		void		decrementGrade(); // grade 3 becomes grade 4

		// Exceptions
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Grade too high");
				}
		};
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Grade too low");
				}
		};

	private:
		const std::string	_name; // only name is constant
		int					_grade;
};

std::ostream& operator<<(std::ostream& output, const Bureaucrat& b);

#endif

/*
class C 
{
	public:
   	C();
	int foo () const;  // don't change the object it's applied to
	void bar (const std::string& s);  // don't change s
}
*/

/* 
----------------- WHY USE EXCEPTIONS? -----------------
Using exceptions for error handling makes your code simpler, 
cleaner, and less likely to miss errors. When using errno / 
if-statements, your error handling and your normal code are 
closely intertwined. That way, your code gets messy and it 
becomes hard to ensure that you have dealt with all errors. */
