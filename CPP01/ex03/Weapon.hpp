/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abroslav <abroslav@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/26 22:50:55 by abroslav          #+#    #+#             */
/*   Updated: 2026/11/26 22:53:43 by abroslav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <stream>

class Weapon
{
	private:
		std::string type;

	public:
		Weapon(std::string type);
		Weapon();
		~Weapon();
		
		void	setType(std::string name);
		const	std::string	&getType() const;
};

#endif
