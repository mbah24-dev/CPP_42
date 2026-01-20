/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbah <mbah@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 00:32:07 by mbah              #+#    #+#             */
/*   Updated: 2026/01/20 02:00:53 by mbah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include <iostream>

#define NUMBER_ANIMALS 4

// Test du tableau d'animaux abstraits
void testAnimalArray(void)
{
    std::cout << "-------------------------------" << std::endl;
    std::cout << "\tANIMAL ARRAY TEST" << std::endl;
    std::cout << "-------------------------------" << std::endl << std::endl;

    AAnimal* animalArray[NUMBER_ANIMALS];

    std::cout << "-- Creating a kennel of " << NUMBER_ANIMALS << " animals: "
              << NUMBER_ANIMALS / 2 << " cats and "
              << NUMBER_ANIMALS - (NUMBER_ANIMALS / 2) << " dogs." << std::endl;

    for (int i = 0; i < NUMBER_ANIMALS / 2; i++)
        animalArray[i] = new Cat();
    for (int i = NUMBER_ANIMALS / 2; i < NUMBER_ANIMALS; i++)
        animalArray[i] = new Dog();

    std::cout << std::endl << "-- The cats and dogs are making sounds..." << std::endl;
    for (int i = 0; i < NUMBER_ANIMALS; i++)
        animalArray[i]->makeSound();

    std::cout << std::endl << "-- Deleting the animals..." << std::endl;
    for (int i = 0; i < NUMBER_ANIMALS; i++)
        delete animalArray[i];

    std::cout << std::endl;
}

// Test de deep copy pour les chats
void testCopyCat(void)
{
    std::cout << "-------------------------------" << std::endl;
    std::cout << "\tCOPY CAT TEST" << std::endl;
    std::cout << "-------------------------------" << std::endl << std::endl;

    Cat* cat1 = new Cat();
    cat1->getBrain()->setIdea(0, "Nap on the keyboard.");
    cat1->getBrain()->setIdea(1, "Chase the laser pointer.");

    std::cout << "Cat1 idea0: " << cat1->getBrain()->getIdea(0) << std::endl;
    std::cout << "Cat1 idea1: " << cat1->getBrain()->getIdea(1) << std::endl;

    Cat* cat2 = new Cat(*cat1); // deep copy

    std::cout << "-- Cat2 ideas after copy --" << std::endl;
    std::cout << "Cat2 idea0: " << cat2->getBrain()->getIdea(0) << std::endl;
    std::cout << "Cat2 idea1: " << cat2->getBrain()->getIdea(1) << std::endl;

    cat1->getBrain()->setIdea(0, "Sleep on the couch.");
    cat1->getBrain()->setIdea(1, "Knock things off the table.");

    std::cout << "-- Cat1 ideas changed --" << std::endl;
    std::cout << "Cat1 idea0: " << cat1->getBrain()->getIdea(0) << std::endl;
    std::cout << "Cat1 idea1: " << cat1->getBrain()->getIdea(1) << std::endl;

    std::cout << "-- Cat2 ideas should remain the same --" << std::endl;
    std::cout << "Cat2 idea0: " << cat2->getBrain()->getIdea(0) << std::endl;
    std::cout << "Cat2 idea1: " << cat2->getBrain()->getIdea(1) << std::endl;

    delete cat1;
    delete cat2;
    std::cout << std::endl;
}

// Test de deep copy pour les chiens
void testCopyDog(void)
{
    std::cout << "-------------------------------" << std::endl;
    std::cout << "\tCOPY DOG TEST" << std::endl;
    std::cout << "-------------------------------" << std::endl << std::endl;

    Dog* dog1 = new Dog();
    dog1->getBrain()->setIdea(0, "Eat the food.");
    dog1->getBrain()->setIdea(1, "Bark at the mailman.");

    std::cout << "Dog1 idea0: " << dog1->getBrain()->getIdea(0) << std::endl;
    std::cout << "Dog1 idea1: " << dog1->getBrain()->getIdea(1) << std::endl;

    Dog* dog2 = new Dog(*dog1); // deep copy

    std::cout << "-- Dog2 ideas after copy --" << std::endl;
    std::cout << "Dog2 idea0: " << dog2->getBrain()->getIdea(0) << std::endl;
    std::cout << "Dog2 idea1: " << dog2->getBrain()->getIdea(1) << std::endl;

    dog1->getBrain()->setIdea(0, "Go for a walk.");
    dog1->getBrain()->setIdea(1, "Play fetch.");

    std::cout << "-- Dog1 ideas changed --" << std::endl;
    std::cout << "Dog1 idea0: " << dog1->getBrain()->getIdea(0) << std::endl;
    std::cout << "Dog1 idea1: " << dog1->getBrain()->getIdea(1) << std::endl;

    std::cout << "-- Dog2 ideas should remain the same --" << std::endl;
    std::cout << "Dog2 idea0: " << dog2->getBrain()->getIdea(0) << std::endl;
    std::cout << "Dog2 idea1: " << dog2->getBrain()->getIdea(1) << std::endl;

    delete dog1;
    delete dog2;
    std::cout << std::endl;
}

int main(void)
{
    testAnimalArray();
    testCopyCat();
    testCopyDog();

    // AAnimal a; // Should not compile: cannot instantiate abstract class

    return 0;
}
