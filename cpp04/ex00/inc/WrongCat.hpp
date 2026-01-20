/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbah <mbah@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 00:31:48 by mbah              #+#    #+#             */
/*   Updated: 2026/01/20 00:39:19 by mbah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

/**
 * @brief WrongCat class (polymorphism does NOT work)
 */
class WrongCat : public WrongAnimal
{
	public:
		WrongCat();
		~WrongCat();

		void makeSound() const;
};

#endif
