#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"
#include <fstream>

class RobotomyRequestForm : public AForm
{
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(const std::string &target);
		virtual ~RobotomyRequestForm();
		RobotomyRequestForm(const RobotomyRequestForm& other);
		RobotomyRequestForm& operator=(const ShrubberyCreationForm& other);

		virtual void	execute(Bureaucrat const& executor) const;

	private:
		const std::string	_target;
};

#endif