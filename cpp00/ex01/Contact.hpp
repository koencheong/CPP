#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>
#include <climits>
#include <iomanip>
#include <limits>

class Contact
{
	public:
		int			addDetails();
		std::string	getDetails(std::string type);

	private:
		std::string	firstName;
		std::string	lastName;
		std::string	nickname;
		std::string phoneNumber;
		std::string darkestSecret;
};

#endif