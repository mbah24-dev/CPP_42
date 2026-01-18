/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbah <mbah@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 23:32:31 by mbah              #+#    #+#             */
/*   Updated: 2026/01/19 00:04:09 by mbah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int main()
{
	std::cout << "=== ClapTrap test ===\n";
	ClapTrap a("CT-01");
	a.attack("enemy");
	a.takeDamage(5);
	a.beRepaired(3);

	std::cout << "\n=== ScavTrap test ===\n";
	ScavTrap b("SCV-01");
	b.attack("intruder");
	b.guardGate();
	b.takeDamage(200);
	b.attack("nobody");

	return 0;
}
