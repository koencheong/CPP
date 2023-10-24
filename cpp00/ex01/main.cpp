#include <iostream>
#include <string>


class Contact
{
	public:
		int		addDetails();
		void	getDetails(std::string type);
		

	private:
		std::string	firstName;
		std::string	lastName;
		std::string	nickname;
		std::string phoneNumber;
		std::string darkestSecret;
};


class PhoneBook
{
	public:
		void	addContact();

	private:
		Contact contacts[8];
};

void	PhoneBook::addContact()
{
	Contact	contact;
	do
	{
		contact.addDetails();
	} while (1);
	
}

void	Contact::getDetails(std::string type)
{
	if (type.compare("firstName") == 0)
		std::cout << this->firstName << std::endl;
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


int	main()
{
	PhoneBook	phonebook;
	std::string	input;

	std::cout << std::endl
			  << "----- HERE IS YOUR AWESOME PHONEBOOK! -----" << std::endl
			  << std::endl
			  << "ADD to save a new contact." << std::endl
			  << "SEARCH to display a specific contact." << std::endl
			  << "EXIT to quit and the contacts are lost FOREVER!" << std::endl
			  << std::endl;
	do
	{
		std::cout << "Enter your command: ";
		std::getline(std::cin, input);
		if (input == "ADD")
			phonebook.addContact();
		if (input == "SEARCH")
			std::cout << "Hi SEARCH" << std::endl;
	} while (input != "EXIT");
}

