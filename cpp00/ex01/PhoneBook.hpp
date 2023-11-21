#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <climits>
#include <iomanip>
#include <limits>

#include "Contact.hpp"

#define MAX_CONTACTS 8

class PhoneBook
{
	public:
		void		addContact();
		void		displayContacts();
		std::string	trimString(std::string str);

	private:
		Contact 	contacts[MAX_CONTACTS];
};

#endif