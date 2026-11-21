/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abroslav <abroslav@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/21 18:32:47 by abroslav          #+#    #+#             */
/*   Updated: 2026/11/21 23:45:37 by abroslav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	printMenu()
{
	std::cout << "\n===========================================\n";
	std::cout << "|           MY   PHONE   BOOK             |\n";
	std::cout << "===========================================\n";
	std::cout << "|     ADD     |    SEARCH    |    EXIT    |\n";
	std::cout << "===========================================\n";
	std::cout << "\n> ";
}

int	main(void)
{
	PhoneBook	phoneBook;
	std::string	input;

	while (1)
	{
		printMenu();
		if (!std::getline(std::cin, input))
			break ;
		if (input == "ADD")
		{
			std::cout << "\n";
			if (!phoneBook.addContact())
			{
				std::cout << "\nContact not saved!\n";
				continue ;
			}
		}
		else if (input == "SEARCH")
		{
			std::cout << "\n";
			if (!phoneBook.searchContact())
			{
				std::cout << "\nError to search contact\n";
				break ;
			}
		}
		else if (input == "EXIT")
		{
			std::cout << "\n";
			break ;
		}
	}
	return (0);
}
