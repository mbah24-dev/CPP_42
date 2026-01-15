/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbah <mbah@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 03:58:05 by mbah              #+#    #+#             */
/*   Updated: 2026/01/15 04:53:20 by mbah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/**
 * @brief Creates a horde of zombies.
 * @param count Number of zombies.
 * @param name Name assigned to each zombie.
 * @return Pointer to the first zombie of the horde or NULL if invalid.
*/
Zombie* zombieHorde(int count, std::string name)
{
	if (count <= 0)
		return NULL;

	Zombie* horde = new Zombie[count];
	for (int i = 0; i < count; i++)
		horde[i].setName(name);

	return (horde);
}
