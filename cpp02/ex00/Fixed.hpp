/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbah <mbah@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 13:16:22 by mbah              #+#    #+#             */
/*   Updated: 2026/01/18 14:17:55 by mbah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

/**
 * @class Fixed
 * @brief Represents a basic fixed-point number.
 */
class Fixed
{
	public:
		/**
		 * @brief Default constructor.
		 */
		Fixed(void);

		/**
		 * @brief Copy constructor.
		 * @param other Object to copy from.
		 */
		Fixed(const Fixed &other);

		/**
		 * @brief Destructor.
		 */
		~Fixed(void);

		/**
		 * @brief Copy assignment operator.
		 * @param other Object to assign from.
		 * @return Reference to the current object.
		 */
		Fixed &operator=(const Fixed &other);

		/**
		 * @brief Returns the raw fixed-point value.
		 * @return Raw integer value.
		 */
		int	getRawBits(void) const;

		/**
		 * @brief Sets the raw fixed-point value.
		 * @param raw New raw value.
		 */
		void	setRawBits(int const raw);

	private:
		int					_rawValue;
		static const int	_fractionBits = 8;
};

#endif
