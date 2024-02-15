#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
	public:
		Intern();
		~Intern();
		Intern(const Intern& other);
		Intern& operator=(const Intern& other);

		AForm*	makeForm(const std::string formName, const std::string target);

		class FormNotFound : public std::exception
		{
			public:
				virtual const char* what() const throw() { return ("[INTERN] It's not a valid form type!\nOnly shrubbery creation / robotomy request / presidential pardon is available."); }
		};
};

#endif