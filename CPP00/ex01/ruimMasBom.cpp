#include "Contact.hpp"

void	Contact::setFirstName(std::string value)
{
	firstName = value;
}

void	Contact::setLastName(std::string value)
{
	lastName = value;
}

void	Contact::setNickname(std::string value)
{
	nickname = value;
}

void	Contact::setPhoneNumber(std::string value)
{
	phoneNumber = value;
}

void	Contact::setDarkestSecret(std::string value)
{
	darkestSecret = value;
}

std::string Contact::getFirstName()
{
	return (firstName);
}

std::string Contact::getLastName()
{
	return (lastName);
}

std::string Contact::getNickname()
{
	return (nickname);
}

std::string Contact::getPhoneNumber()
{
	return (PhoneNumber);
}

std::string Contact::getDarkestSecret()
{
	return (darkestSecret);
}
