/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbah <mbah@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 00:31:41 by mbah              #+#    #+#             */
/*   Updated: 2026/01/20 01:37:46 by mbah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

/**
 * @class Dog
 * @brief Dog with a Brain (deep copy)
 */
class Dog : public Animal
{
	public:
		Dog();
		Dog(const Dog& other);
		~Dog();

		Dog& operator=(const Dog& other);

		void makeSound() const;

		Brain* getBrain();
		const Brain* getBrain() const;

	private:
		Brain* _brain;
};

#endif
