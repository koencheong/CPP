#include "PhoneBook.hpp"

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

	while (input != "EXIT")
	{
		std::cout << "Enter your command: ";
		std::getline(std::cin, input);
		if (input == "ADD")
			phonebook.addContact();
		if (input == "SEARCH")
			phonebook.displayContacts();
	}
	return (0);
}
