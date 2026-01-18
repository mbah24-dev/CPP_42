/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbah <mbah@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 23:32:31 by mbah              #+#    #+#             */
/*   Updated: 2026/01/18 23:36:35 by mbah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap a("Alpha");
	ClapTrap b("Beta");

	a.attack("Beta");
	b.takeDamage(3);

	b.beRepaired(2);
	b.attack("Alpha");
	a.takeDamage(4);

	return 0;
}
