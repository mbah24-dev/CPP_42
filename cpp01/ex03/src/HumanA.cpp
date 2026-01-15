/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbah <mbah@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 14:21:03 by mbah              #+#    #+#             */
/*   Updated: 2026/01/15 14:34:10 by mbah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(const std::string& name, Weapon& weapon)
	: _name(name), _weapon(weapon) {}

void HumanA::attack() const
{
	std::cout << _name << " attacks with their "
			  << _weapon.getType() << std::endl;
}
