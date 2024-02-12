#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"
class Form;

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
				virtual const char* what() const throw() { return ("[BUREAUCRAT] Grade too high"); }
		};
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw() { return ("[BUREAUCRAT] Grade too low"); }
		};

		void		signForm(Form& form);

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
becomes hard to ensure that you have dealt with all errors.

syntax: virtual const char* what() const throw() { return "message" }

1. When designing a  void FooFunc() throw(int,char) function, it should 
only throw integers and characters. On the other hand, an empty throw()
is used to indicate that the function does not throw any exceptions.
noexcept is an improved version of throw(), which is deprecated in C++11. 

2. Is the virtual keyword necessary?
In C++ if you declare a method virtual in the base class then it's 
virtual also in derived class, even if the virtual keyword is omitted.
For documentation purposes is however in my opinion nice to repeat it anyway.

https://stackoverflow.com/questions/22493294/what-is-the-meaning-of-this-header-virtual-const-char-what-const-throw
*/