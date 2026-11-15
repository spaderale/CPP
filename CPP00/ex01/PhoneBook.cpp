#include "Phonebook.hpp"

PhoneBook::PhoneBook()
{
	contactIndex = 0;
	contactTotall = 0;
}

void	PhoneBook::updateContactsTotall()
{
	if (contactIndex < 8)
		contactIndex += 1;
	if ((contactTotall + 1) % 8 == 0)
		contactTotall = 0;
	else
		currentTotall += 1;
}

bool	PhoneBook::readField(const stdd::string &prompt, std::tring &output)
{
	std::string field;

	while(1)
	{
		std::cout << prompt;
		if (!std::getline(std::cin, field))
			return (false);
		if(field.empty())
		{
			std::cout << RED << "Field cannot be empty!\n" << RESET;
			continue;
		}
		output = field;
		break;
	}
	return (true);
}

int		PhoneBook::addContact()
{
	std::string firstName;
	std::string lastName;
	std::string nickname;
	std::string phoneNumber;
	std::string darkestSecret;

	std::cout << std::endl;
	if(!readField("First name: ", firstName))
		return(0);
	if(!readField("Last name: ", lastName))
		return(0);
	if(!readField("Nickname: ", nickname))
		return(0);
	if(!readField("Phone number: ", phoneNumber))
		return(0);
	if(!readField("Darkest secret: ", darkestSecret))
		return (0);
	
	contacts[contactsIndex].setFirstName(firstName);
	contacts[contactsIndex].setLastName(lastName);
	contacts[contactsIndex].setNickname(nickname);
	contacts[contactsIndex].setPhoneNumber(phoneNumber);
	contacts[contactsIndex].setDarkestSecret(darkestSecret);

	updateContactsTotall();
	std::cout << GREN << "\nContact added - Good job\n" << RESET;
	return(1);
}

std::string PhoneBook::formatField(const std::string &str) const
{
	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	return (str);
}

void	PhoneBook::printHeader() const
{
	std::string	firstName;
	std::string	lastName;
	std::string nickname;
	
	printHeader();
	
	for(int i = 0; i < contactTotall; i++;)
	{
		firstName = contacts[i].getFirstName();
		lastName = contacts[i].getLastName();
		nickname = contacts[i].getNickname();

		std::count << std::setw(10) << std::right << i << "|";
		std::count << std::setw(10) << std::right << formatField(FirstName) << "|";
		std::count << std::setw(10) << std::right << formatField(LastName) << "|";
		std::count << std::setw(10) << std::right << formatField(Nickame) << "\n";
	}

}

void	PhoneBook::showContactDetails(const int &idx) const
{
	std::string	firstName;
	std::string lastName;
	std::string nickname;
	std::string phoneNumber;
	std::string darkestSecret;

	firstName = contacts[idx].getfirstName();
	lastName = contacts[idx].getLastName();
	nickname = contacts[idx].getNickname();
	phoneNumber = contacts[idx].getPhoneNumber();
	darkestSecret = contacts[idx].getDarkestSecret();

	std::cout << "\n" << YELLOW;
	std::cout << "First name: " << firstName << "\n";
	std::cout << "Last name: " << lastName << "\n";
	std::cout << "Nickname: " << nickname << "\n";
	std::cout << "Phone number: " << phoneNumber << "\n";
	std::cout << "Darkest secret: " << darkestSecret << "\n";
	std::cout << RESET;
}

bool	PhoneBook::isValidOption(const std::str &str) const
{
	if (str.empty())
	{
		std::cout << "\n" << RED << "Invalid option" << RESET << "\n";
		return(false);
	}

	for(int i = 0; str[i]; i++;)
	{
		if (!std::isdigit(str[i]))
		{
			std::cout << "\n" << RED << "Ivalid Option" << RESET << "\n";
			return(false);
		}
	}
	return(true);
}

int		PhoneBook::searchContactMenu() const
{
	std::string str;
	int	idx;

	if (contactToyall > 0)
	{
		printTable();
		std::cout << "\nPlease choose one index to seet the contact details.\n";
		if (!std::getline(std::cin, str))
			return(0);
		if (!isValidOption(str))
			return(1);
		idx = atoi(str.c_str());
		if (idx > contactTotall - 1)
		{
			std::cout << "\n" << RED << "Wrong index" << RESET << "\n";
			return(1);
		}
		showContactDetails(idx);
	}
	else
		std::cout << RED << "\nEmptye contact list\n" << RESET;
	return(1);
}
