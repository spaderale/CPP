/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abroslav <abroslav@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/26 22:48:24 by abroslav          #+#    #+#             */
/*   Updated: 2026/11/26 22:50:50 by abroslav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	this->type = type;
}

Weapon::Weapon()
{}

Weapon::~Weapon()
{}

void	Weapon::setType(std::string type)
{
	this->type = type;
}

const std::string	&Weapon::getType() const
{
	return this->type;
}
