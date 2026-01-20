/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbah <mbah@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 00:31:34 by mbah              #+#    #+#             */
/*   Updated: 2026/01/20 00:32:39 by mbah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>

/**
 * @brief Base class representing a generic animal
 */
class Animal
{
	public:
		Animal();
		Animal(const Animal& other);
		virtual ~Animal();

		Animal& operator=(const Animal& other);

		/**
		 * @brief Returns the animal type
		 */
		const std::string& getType() const;

		/**
		 * @brief Makes the animal sound (virtual)
		 */
		virtual void makeSound() const;

	protected:
		std::string _type;
};

#endif
