/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abroslav <abroslav@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/25 20:46:17 by abroslav          #+#    #+#             */
/*   Updated: 2026/11/25 21:12:43 by abroslav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


Zombie::Zombie(std::string &name)
{
	this->name = name;
}

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
	std::cout << this->name << " morri" << std::endl;
}

void	Zombie::setName(std::string &name)
{
	this->name = name;
}

void	Zombie::announce(void)
{
	std::cout << this->name << " vivi" << std::endl;
}
