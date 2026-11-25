/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abroslav <abroslav@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/24 21:27:17 by abroslav          #+#    #+#             */
/*   Updated: 2026/11/25 13:06:29 by abroslav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie(std::string name)
{
	Zombie *zombie = new Zombie(name);
	if (!zombie)
	{
		std::cerr << "Error - Allocation failed" << std::endl;
		return(NULL);
	}
	return (zombie);
}
