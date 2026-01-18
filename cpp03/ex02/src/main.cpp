/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbah <mbah@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 23:32:31 by mbah              #+#    #+#             */
/*   Updated: 2026/01/19 00:20:39 by mbah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

int main(void)
{
	ClapTrap a("CT-01");
	ScavTrap b("SCV-01");
	FragTrap c("FRG-01");

	a.attack("enemy");
	b.attack("enemy");
	c.attack("enemy");

	b.guardGate();
	c.highFivesGuys();

	c.takeDamage(200);
	c.highFivesGuys();

	return 0;
}
