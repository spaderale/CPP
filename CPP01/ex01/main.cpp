/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abroslav <abroslav@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/25 20:19:27 by abroslav          #+#    #+#             */
/*   Updated: 2026/11/25 21:14:47 by abroslav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int n = 10;

	Zombie* horde = zombieHorde(n, "aaa");
	
	for (int i = 0; i < n; i++)
	{ horde[i].announce(); }
	
	delete[] horde;

	return (0);
}
