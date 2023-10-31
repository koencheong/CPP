#include <iostream>
#include <string>
#include <climits>
#include <iomanip>
#include <limits>

#define MAX_CONTACTS 3

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

class PhoneBook
{
	public:
		void	addContact();
		void	displayContacts();
		std::string	trimString(std::string str);

	private:
		Contact contacts[8];
};

void	PhoneBook::addContact()
{
	Contact	newContact;
	static int	i;
	std::string	ans;

	if (i == MAX_CONTACTS)
	{
		std::cout << "-----------------------------------------------------------------" << std::endl
					<< "Your phonebook is full!" << std::endl
					<< "Adding new contact will remove the oldest contact. Are you sure?" << std::endl;
		while (1)
		{
			std::cout << "Enter YES / NO: ";
			std::getline(std::cin, ans);
			if (ans == "YES")
			{
				i = 0;
				break;
			}
			else if (ans == "NO")
				return ;
			else
				std::cout << "Invalid response." << std::endl;
		}
	}

	while (1)
	{
		if (newContact.addDetails())
			std::cout << "Details can't leave blank!" << std::endl;
		else
			break;
	}
	this->contacts[i] = newContact;
	i++;
}

std::string	PhoneBook::trimString(std::string str)
{
	if (str.length() > 10)
		str = str.substr(0, 9) + ".";
	return (str);
}

void	PhoneBook::displayContacts()
{
	Contact	tmp;
	int	flag;

	tmp = this->contacts[0];
	flag = 1;
	
	std::cout << "|     INDEX|FIRST NAME| LAST NAME|  NICKNAME|" << std::endl;
	for (int i = 0; i < MAX_CONTACTS; i++)
	{
		tmp = this->contacts[i];
		{
			std::cout << "|" 
					  << std::setw(10) << i + 1 << "|"
					  << std::setw(10) << trimString(tmp.getDetails("firstName")) << "|"
					  << std::setw(10) << trimString(tmp.getDetails("lastName")) << "|"
					  << std::setw(10) << trimString(tmp.getDetails("nickname")) << "|"
					  << std::endl;
		}
	}
	do
	{
		int	index;
		std::cout << "Select an index: ";
		std::cin >> index;

		if (!isdigit(index) && (index >= 1 && index <= MAX_CONTACTS))
		{
			tmp = this->contacts[index - 1];
			if (tmp.getDetails("firstName") == "")
			{
				std::cout << "Empty contact, nothing to be displayed!" << std::endl;
				break;
			}
			std::cout << std::endl
					  << "---------- " << tmp.getDetails("firstName") << "'s Detail ----------" << std::endl
					  << "First name: " << tmp.getDetails("firstName") << std::endl
					  << "Last name: " << tmp.getDetails("lastName") << std::endl
					  << "Nickname: " << tmp.getDetails("nickname") << std::endl
					  << "Phone number: " << tmp.getDetails("phoneNumber") << std::endl
					  << "Darkest secret: " << tmp.getDetails("secret") << std::endl
					  << std::endl;
			flag = 0;
			break;
		}
		else
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
			std::cout << "Invalid index! Enter a valid index." << std::endl;
		}
	} while (flag != 0);
	while (std::cin.get() != '\n')
		continue;
}

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

