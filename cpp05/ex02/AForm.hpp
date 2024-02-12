#ifndef AFORM_HPP
#define AFORM_HPP

#include "Bureaucrat.hpp"
class Bureaucrat;

class AForm
{
	public:
		AForm();
		AForm(const std::string name, const int gradeToSign, const int gradeToExec);
		virtual ~AForm();
		AForm(const AForm& other);
		AForm& operator=(const AForm& other);

		// Exceptions
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw() { return ("[AFORM] Grade too high"); }
		};
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw() { return ("[AFORM] Grade too low"); }
		};

		// Getters for all the attributes
		std::string getName() const;
		bool		getIsSigned() const;
		int			getGradeToSign() const;
		int			getGradeToExec() const;

		void beSigned(const Bureaucrat& bureaucrat);

		// Pure virtual function that the concrete class needs to implement itself
		void		execute(Bureaucrat const& executor) const;

	private:
		const std::string	_name;
		bool				_isSigned;
		const int			_gradeToSign;
		const int			_gradeToExec;
};

std::ostream& operator<<(std::ostream& output, const AForm& f);

#endif