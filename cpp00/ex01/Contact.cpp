#include "Contact.hpp"

std::string	Contact::getDetails(std::string type)
{
	if (type.compare("firstName") == 0)
		return (this->firstName);
	else if (type.compare("lastName") == 0)
		return (this->lastName);
	else if (type.compare("nickname") == 0)
		return (this->nickname);
	else if (type.compare("phoneNumber") == 0)
		return (this->phoneNumber);
	else if (type.compare("secret") == 0)
		return (this->darkestSecret);
	return (0);
}

int Contact::addDetails()
{
	std::cout << "Enter first name: ";
	std::getline(std::cin, this->firstName);
	if (this->firstName == "")
		return (1);
	
	std::cout << "Enter last name: ";
	std::getline(std::cin, this->lastName);
	if (this->lastName == "")
		return (1);

	std::cout << "Enter nickname: ";
	std::getline(std::cin, this->nickname);
	if (this->nickname == "")
		return (1);

	std::cout << "Enter phone number: ";
	std::getline(std::cin, this->phoneNumber);
	if (this->phoneNumber == "")
		return (1);
	
	std::cout << "Tell me your darkest secret: ";
	std::getline(std::cin, this->darkestSecret);
	if (this->darkestSecret == "")
		return (1);

	return (0);
}