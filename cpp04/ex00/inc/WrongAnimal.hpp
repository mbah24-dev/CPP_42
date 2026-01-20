/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbah <mbah@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 00:31:44 by mbah              #+#    #+#             */
/*   Updated: 2026/01/20 00:38:08 by mbah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <string>

/**
 * @brief Incorrect base class (no virtual functions)
 */
class WrongAnimal
{
	public:
		WrongAnimal();
		~WrongAnimal();

		const std::string& getType() const;
		void makeSound() const;

	protected:
		std::string _type;
};

#endif
