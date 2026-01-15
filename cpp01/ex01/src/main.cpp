/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbah <mbah@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 03:57:58 by mbah              #+#    #+#             */
/*   Updated: 2026/01/15 04:53:11 by mbah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie* zombieHorde(int count, std::string name);

int main(void)
{
	int amount = 5;

	std::cout << "Creating zombie horde..." << std::endl;
	Zombie* horde = zombieHorde(amount, "HordeZombie");

	if (!horde)
	{
		std::cout << "Failed to create zombie horde." << std::endl;
		return (1);
	}

	for (int i = 0; i < amount; i++)
		horde[i].announce();

	std::cout << "Destroying zombie horde..." << std::endl;
	delete[] horde;

	return (0);
}
