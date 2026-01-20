/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbah <mbah@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 00:32:07 by mbah              #+#    #+#             */
/*   Updated: 2026/01/20 00:40:17 by mbah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

int main()
{
	std::cout << "=== Correct polymorphism ===" << std::endl;
	const Animal* a1 = new Dog();
	const Animal* a2 = new Cat();

	a1->makeSound();
	a2->makeSound();

	delete a1;
	delete a2;

	std::cout << "\n=== Wrong polymorphism ===" << std::endl;
	const WrongAnimal* wa = new WrongCat();
	wa->makeSound(); // WRONG behavior on purpose
	delete wa;

	return 0;
}
