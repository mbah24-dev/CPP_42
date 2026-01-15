/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbah <mbah@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 03:58:09 by mbah              #+#    #+#             */
/*   Updated: 2026/01/15 04:53:14 by mbah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

/**
 * @brief Default constructor.
 */
Zombie::Zombie(void) : _name("Unnamed")
{
	std::cout << "A zombie has risen." << std::endl; //risen = ressuscité
}

/**
 * @brief Destructor.
 */
Zombie::~Zombie(void)
{
	std::cout << _name << " has been destroyed." << std::endl;
}

/**
 * @brief Assigns a name to the zombie.
 */
void Zombie::setName(const std::string &name)
{
	_name = name;
}

/**
 * @brief Zombie announcement.
 */
void Zombie::announce(void) const
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
