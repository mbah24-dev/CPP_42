/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbah <mbah@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 03:58:09 by mbah              #+#    #+#             */
/*   Updated: 2026/01/15 04:52:49 by mbah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

/**
 * @brief Default constructor
 */
Zombie::Zombie(void) : _name("Unnamed")
{
	std::cout << "A zombie has been created." << std::endl;
}

/**
 * @brief Constructor with name
 */
Zombie::Zombie(const std::string& name) : _name(name)
{
	std::cout << "Zombie " << _name << " has been created." << std::endl;
}

/**
 * @brief Destructor
 */
Zombie::~Zombie(void)
{
	std::cout << _name << " has been destroyed." << std::endl;
}

/**
 * @brief Makes the zombie announce itself
 */
void Zombie::announce(void) const
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
