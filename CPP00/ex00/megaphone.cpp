/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abroslav <abroslav@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/20 19:36:44 by abroslav          #+#    #+#             */
/*   Updated: 2026/11/25 17:27:27 by abroslav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int ac, char **av)
{
	std::string	str;

	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else if (ac > 1)
	{
		for (int i = 1; i < ac; i++)
		{
			str = std::string(av[i]);
			for (size_t y = 0; y < str.length(); y++)
				std::cout << (char)std::toupper(str.at(y));
		}
	}
	
	std::cout << std::endl;
	return(0);
}
