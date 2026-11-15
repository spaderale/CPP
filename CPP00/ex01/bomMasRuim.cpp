#include "PhoneBook.hpp"

PhoneBook::PhoneBook() //Constructor
{
	currentIndex= 0;
	contactTotall = 0;
}

std::string formatField(std::string s)
{
	if (s.length() > 10)
		return s.substr(0, 9) + ".";
	return s;
}

void	PhoneBook::addContact(
		std::string firstName,
		std::string lastName,
		std::string nickname,
		std::string phoneNumber,
		std::string darkestSecret)
{
	contacts[currentIndex].setFirstName(firstName);
	contacts[currentIndex].setLastName(lastName);
	contacts[currentIndex].setNickname(nickName);
	contacts[currentIndex].setPhoneNumber(phoneNumber);
	contacts[currentIndex].setDarkestSecret(darkestSecret);

	//.set para preencher/alterar atributos privados
		

	currentIndex = (currentIndex + 1) % 8; //zerar o index no oitavo contato

	if (contactTotall < 8)
		contactTotall++;
}

void	PhoneBook::listContacts()
{
	std::cout << std::setw(10) << "Index" << "|";
	std::cout << std::setw(10) << "First Name" << "|";
	std::cout << std::setw(10) << "Last Name" << "|";
	std::cout << std::setw(10) << "Nickname" << std::endl;

	int i = 0;
	while (i < contactTotall)
	{
		std::cout << std::setw(10) << i << "|";

		std::cout << std::setw(10) << formatField(contacts[i].getFirstName()) << "|";

		std::cout << std::setw(10) << formatField(contacts[i].getLastName()) << "|";

		std::cout << std::setw(10) << formatField(contacts[i].getNickname()) << std::endl;
	
		i++;
	}
}

void	PhoneBook::saveContact(int idx)
{
	std::cout << "First Name: " << contacts[idx].getFirstName() << std::endl;
	std::cout << "Last Name: " << contacts[idx].getLastName() << std::endl;
	std::cout << "Nickname: " << contacts[idx].getNickname() << std::endl;
	std::cout << "Phone Number: " << contacts[idx].getNumber() << std::endl;
	std::cout << "Dasrkest Secret: " << contacts[idx].getDarkestSecret() << std::endl;
}

int		PhoneBook::getTotalContacts(){return contactTotall;}

