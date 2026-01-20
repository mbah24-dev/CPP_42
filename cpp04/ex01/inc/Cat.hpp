/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbah <mbah@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 00:31:38 by mbah              #+#    #+#             */
/*   Updated: 2026/01/20 01:39:46 by mbah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

/**
 * @class Cat
 * @brief Cat class inheriting from Animal and owning a Brain (deep copy)
 */
class Cat : public Animal
{
	public:
		Cat();
		Cat(const Cat& other);
		~Cat();

		Cat& operator=(const Cat& other);

		void makeSound() const;

		Brain* getBrain();
		const Brain* getBrain() const;

	private:
		Brain* _brain;
};

#endif
