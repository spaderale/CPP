/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abroslav <abroslav@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/20 20:12:18 by abroslav          #+#    #+#             */
/*   Updated: 2026/11/21 23:50:45 by abroslav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	contactIndex = 0;
	contactTotal = 0;
}

void	PhoneBook::updateContactsList()
{
	if (contactTotal < 8)
		contactTotal += 1;
	contactIndex = (contactIndex + 1) % 8;
}

bool	PhoneBook::readField(const std::string &str, std::string &input, bool onlyDig)
{
	std::string field;

	while(1)
	{
		std::cout << str;
		if (!std::getline(std::cin, field))
			return(false);
		
		bool hasNonSpace = false;
		
		for (int i = 0; field[i]; i++)
		{
			if (!std::isspace(static_cast<unsigned char>(field[i])))
			{
				hasNonSpace = true;
				break;
			}
		}
		if (!hasNonSpace)
		{
			std::cout << "Field cannot be empty!\n";
			continue ;
		}
		if (onlyDig)
		{
			if (!stringValidation(field))
				continue ;
		}
		else
		{
			for (int i = 0; field[i]; i++)
			{
				if (std::isspace(static_cast<unsigned char>(field[i])))
					field[i] = ' ';
			}
		}
		input = field;
		break ;
	}
	return (true);
}

int	PhoneBook::addContact()
{
	std::string firstName;
	std::string lastName;
	std::string nickName;
	std::string phoneNumber;
	std::string darkestSecret;
	
	int idx = contactIndex;

	std::cout << std::endl;

	if (!readField("First name: ", firstName, false)) return (0);
	if (!readField("Last name: ", lastName, false)) return (0);
	if (!readField("Nickname: ", nickName, false)) return (0);
	if (!readField("Phone number: ", phoneNumber, true)) return (0);
	if (!readField("Darkest secret: ", darkestSecret, false)) return (0);

	contacts[idx].setFirstName(firstName);
	contacts[idx].setLastName(lastName);
	contacts[idx].setNickname(nickName);
	contacts[idx].setPhoneNumber(phoneNumber);
	contacts[idx].setDarkestSecret(darkestSecret);
	updateContactsList();

	std::cout << "\n>>   -------   Contact added  -------   <<\n";
	return(1);
}

std::string	PhoneBook::formatField(const std::string &str) const
{
	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	return (str);
}

void	PhoneBook::printHeader() const
{
	std::string	firstName;
	std::string	lastName;
	std::string	nickName;

	for(int i = 0; i < contactTotal; i++)
	{
		firstName = contacts[i].getFirstName();
		lastName = contacts[i].getLastName();
		nickName = contacts[i].getNickname();

		std::cout << "----------|----------|----------|----------\n";
		std::cout << std::setw(10) << std::right << i << "|";
		std::cout << std::setw(10) << std::right << formatField(firstName) << "|";
		std::cout << std::setw(10) << std::right << formatField(lastName) << "|";
		std::cout << std::setw(10) << std::right << formatField(nickName) << "\n";
		std::cout << "----------|----------|----------|----------\n" << "\n";
	}
}

void	PhoneBook::showContactDetails(const int &idx) const
{
	std::string     firstName;
        std::string     lastName;
        std::string     nickName;
	std::string	phoneNumber;
	std::string	darkestSecret;

	firstName = contacts[idx].getFirstName();
	lastName  = contacts[idx].getLastName();
	nickName  = contacts[idx].getNickname();
	phoneNumber = contacts[idx].getPhoneNumber();
	darkestSecret = contacts[idx].getDarkestSecret();

	std::cout << "\n===========================================\n";
	std::cout << "First name: " << firstName << "\n";
	std::cout << "Last name: " << lastName << "\n";
	std::cout << "Nickname: " << nickName << "\n";
	std::cout << "Phone number: " << phoneNumber << "\n";
	std::cout << "Secret: " << darkestSecret << "\n";
	std::cout << "===========================================\n" << "\n";
}

bool	PhoneBook::stringValidation(const std::string &str) const
{
	if (str.empty()){
		std::cout << "\n" << "Invalid: empty value" << "\n";
		return (false);}
	for (int i = 0; str[i]; i++)
	{
		if (!std::isdigit(static_cast<unsigned char>(str[i]))){
			std::cout << "\n" << "Invalid: numbers only!" << "\n";
			return (false);}
	}
	return (true);
}

int	PhoneBook::searchContact() const
{
	std::string	str;
	int		i;

	if (contactTotal > 0)
	{
		printHeader();
		std::cout << "\n>> Choose a contact to see the details <<\n";
		std::cout << "\n> ";
		if (!std::getline(std::cin, str)) return (0);
		if (!stringValidation(str)) return (1);
		if (str.length() > 9)
		{
			std::cout << "\nPlease choose a valid contact\n";
			return (1);
		}
		i = std::atoi(str.c_str());
		if (i < 0 || i >= contactTotal)
		{
			std::cout << "\nPlease choose a valid contact\n";
			return (1);
		}
		showContactDetails(i);
	}
	else
		std::cout << "\nThe contact list is empty\n";
	return (1);
}
