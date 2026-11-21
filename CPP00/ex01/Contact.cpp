/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abroslav <abroslav@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/21 17:55:54 by abroslav          #+#    #+#             */
/*   Updated: 2026/11/21 23:54:05 by abroslav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void	Contact::setFirstName(std::string str)
{
	firstName = str;
}

void	Contact::setLastName(std::string str)
{
	lastName = str;
}

void	Contact::setPhoneNumber(std::string str)
{
	phoneNumber = str;
}

void	Contact::setNickname(std::string str)
{
	nickname = str;
}

void	Contact::setDarkestSecret(std::string str)
{
	darkestSecret = str;
}

std::string	Contact::getFirstName() const
{
	return(firstName);
}

std::string	Contact::getLastName() const
{
	return(lastName);
}

std::string	Contact::getNickname() const
{
	return(nickname);
}

std::string	Contact::getPhoneNumber() const
{
	return(phoneNumber);
}

std::string	Contact::getDarkestSecret() const
{
	return(darkestSecret);
}
