/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbah <mbah@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 13:16:22 by mbah              #+#    #+#             */
/*   Updated: 2026/01/18 14:17:38 by mbah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

/**
 * @class Fixed
 * @brief Fixed-point number representation with 8 fractional bits.
 */
class Fixed
{
	public:
		Fixed(void);
		Fixed(const Fixed &other);
		Fixed(int value);
		Fixed(float value);
		~Fixed(void);

		Fixed &operator=(const Fixed &other);

		int		getRawBits(void) const;
		void	setRawBits(int raw);

		float	toFloat(void) const;
		int		toInt(void) const;

	private:
		int					_rawValue;
		static const int	_fractionBits = 8;
};

/**
 * @brief Stream insertion operator overload.
 */
std::ostream &operator<<(std::ostream &os, const Fixed &number);

#endif
