/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbah <mbah@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 03:58:05 by mbah              #+#    #+#             */
/*   Updated: 2026/01/15 04:52:45 by mbah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/**
 * @brief Creates a zombie on the stack and makes it announce itself
 * @param name Name of the zombie
 */
void randomChump(const std::string& name)
{
	Zombie zombie(name); //STACK (LA PILE)
	zombie.announce();
}
