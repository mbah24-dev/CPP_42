/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbah <mbah@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 03:57:58 by mbah              #+#    #+#             */
/*   Updated: 2026/01/15 04:52:36 by mbah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie(const std::string& name);
void randomChump(const std::string& name);

int main(void)
{
	Zombie* heapZombie = newZombie("HeapZombie"); //HEAP (LE TAS)
	heapZombie->announce();

	randomChump("StackZombie");

	delete heapZombie;
	return 0;
}
