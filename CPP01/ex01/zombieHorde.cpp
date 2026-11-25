/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abroslav <abroslav@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/25 20:09:42 by abroslav          #+#    #+#             */
/*   Updated: 2026/11/25 21:00:05 by abroslav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name)
{
	Zombie*	Z;
	
	Z = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		Z[i].setName(name);
	}
	return(Z);
}
