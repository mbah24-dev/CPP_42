/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbah <mbah@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 03:58:18 by mbah              #+#    #+#             */
/*   Updated: 2026/01/15 04:53:07 by mbah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

/**
 * @class Zombie
 * @brief Represents a simple zombie with a name.
 */
class Zombie
{
	private:
		std::string _name;

	public:
		Zombie(void);
		~Zombie(void);

		/**
		 * @brief Sets the zombie name.
		 * @param name The name to assign.
		 */
		void	setName(const std::string &name);

		/**
		 * @brief Makes the zombie announce itself.
		 */
		void	announce(void) const;
};

#endif
