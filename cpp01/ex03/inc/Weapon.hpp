/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbah <mbah@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 14:21:17 by mbah              #+#    #+#             */
/*   Updated: 2026/01/15 14:28:40 by mbah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

/**
 * @class Weapon
 * @brief Represents a weapon with a modifiable type.
 */
class Weapon
{
	private:
		std::string _type;

	public:
		Weapon(const std::string& type);
		const std::string& getType() const;
		void setType(const std::string& newType);
};

#endif
