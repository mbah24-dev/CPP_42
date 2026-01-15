/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbah <mbah@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 03:58:01 by mbah              #+#    #+#             */
/*   Updated: 2026/01/15 04:52:40 by mbah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/**
 * @brief Creates a zombie on the heap
 * @param name Name of the zombie
 * @return Pointer to the created zombie
 */
Zombie* newZombie(const std::string& name)
{
	return new Zombie(name);
}
