/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbah <mbah@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 03:58:18 by mbah              #+#    #+#             */
/*   Updated: 2026/01/15 04:52:25 by mbah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

/**
 * @class Zombie
 * @brief Represents a zombie with a name that can announce itself.
*/
class Zombie
{
	private:
		std::string _name;

	public:
		Zombie(void);
		Zombie(const std::string& name);
		~Zombie(void);

		void announce(void) const;
};

#endif
