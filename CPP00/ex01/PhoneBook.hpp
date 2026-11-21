/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abroslav <abroslav@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/21 18:22:45 by abroslav          #+#    #+#             */
/*   Updated: 2026/11/21 23:34:13 by abroslav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <string>
#include <iostream>
#include <iomanip>
#include <cctype>
#include <cstdlib>
#include "Contact.hpp"

class	PhoneBook
{
private:
	Contact		contacts[8];
	int		contactIndex;
	int		contactTotal;
	void		updateContactsList();
	bool		readField(const std::string &str, std::string &input, bool onlyDig);
	void		printHeader() const;
	void		showContactDetails(const int &idx) const;
	bool		stringValidation(const std::string &str) const;
	std::string	formatField(const std::string &str) const;

public:
	int		addContact();
	int		searchContact() const;
	PhoneBook();
};

#endif
