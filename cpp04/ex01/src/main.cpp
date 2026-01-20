/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbah <mbah@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 00:32:07 by mbah              #+#    #+#             */
/*   Updated: 2026/01/20 01:03:39 by mbah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int main()
{
	const int size = 4;
	Animal* animals[size];

	for (int i = 0; i < size / 2; i++)
		animals[i] = new Dog();
	for (int i = size / 2; i < size; i++)
		animals[i] = new Cat();

	std::cout << "\n--- Sounds ---\n";
	for (int i = 0; i < size; i++)
		animals[i]->makeSound();

	std::cout << "\n--- Deletion ---\n";
	for (int i = 0; i < size; i++)
		delete animals[i];

	std::cout << "\n--- Deep copy test ---\n";
	Dog a;
	a.getBrain()->setIdea(0, "Bone!");
	Dog b(a);
	std::cout << b.getBrain()->getIdea(0) << std::endl;

	return 0;
}
