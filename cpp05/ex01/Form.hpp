#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"
class Bureaucrat;

class Form
{
	public:
		Form();
		Form(const std::string name, const int gradeToSign, const int gradeToExec);
		~Form();
		Form(const Form& other);
		Form& operator=(const Form& other);

		// Exceptions
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw() { return ("[FORM] Grade too high"); }
		};
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw() { return ("[FORM] Grade too low"); }
		};

		// Getters for all the attributes
		std::string getName() const;
		bool		getIsSigned() const;
		int			getGradeToSign() const;
		int			getGradeToExec() const;

		void beSigned(const Bureaucrat& bureaucrat);

	private:
		const std::string	_name;
		bool				_isSigned;
		const int			_gradeToSign;
		const int			_gradeToExec;
};

std::ostream& operator<<(std::ostream& output, const Form& f);

#endif