
#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

//#include "Contact.hpp"

#include<iomanip>
#include<iostream>

	/*Existe uma classe PhoneBook e ela tem essas variaveis e funcções */
class	PhoneBook
{
	private:
		int	currentIndex;
		int	contactsTotall;
		contact contacts[8];
		
	public:
		PhoneBook();	//constructor: serve iniciar valores

		void	addContact(				//função add contato
				std::string firstName,
				std::string lastName,
				std::string nickname,
				std::string phoneNumber,
				std::string darkestSecret);
		void	listContacts();
		void	saveContact(int idx);
		int		getTotalContacts();

};

#endif
