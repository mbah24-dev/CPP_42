/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbah <mbah@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 13:16:22 by mbah              #+#    #+#             */
/*   Updated: 2026/01/18 14:17:21 by mbah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

/**
 * @class Fixed
 * @brief Fixed-point number class with 8 fractional bits
 *
 * This class represents a fixed-point number stored internally
 * as an integer. The value is scaled by 2^fractionalBits.
 */
class Fixed
{
	public:
		/* ==================== Constructors & Destructor ==================== */

		/** @brief Default constructor (value = 0) */
		Fixed(void);

		/** @brief Copy constructor */
		Fixed(const Fixed& other);

		/** @brief Construct from integer */
		Fixed(int value);

		/** @brief Construct from float */
		Fixed(float value);

		/** @brief Destructor */
		~Fixed(void);

		/* ==================== Assignment ==================== */

		/** @brief Copy assignment operator */
		Fixed& operator=(const Fixed& other);

		/* ==================== Comparison operators ==================== */

		bool operator>(const Fixed& other) const;
		bool operator<(const Fixed& other) const;
		bool operator>=(const Fixed& other) const;
		bool operator<=(const Fixed& other) const;
		bool operator==(const Fixed& other) const;
		bool operator!=(const Fixed& other) const;

		/* ==================== Arithmetic operators ==================== */

		Fixed operator+(const Fixed& other) const;
		Fixed operator-(const Fixed& other) const;
		Fixed operator*(const Fixed& other) const;
		Fixed operator/(const Fixed& other) const;

		/* ==================== Increment / Decrement ==================== */

		/** @brief Prefix increment */
		Fixed& operator++();

		/** @brief Postfix increment */
		Fixed operator++(int);

		/** @brief Prefix decrement */
		Fixed& operator--();

		/** @brief Postfix decrement */
		Fixed operator--(int);

		/* ==================== Conversion ==================== */

		/** @brief Convert to float */
		float toFloat(void) const;

		/** @brief Convert to integer */
		int toInt(void) const;

		/* ==================== Raw access ==================== */

		int getRawBits(void) const;
		void setRawBits(int raw);

		/* ==================== Min / Max ==================== */

		static Fixed& min(Fixed& a, Fixed& b);
		static const Fixed& min(const Fixed& a, const Fixed& b);

		static Fixed& max(Fixed& a, Fixed& b);
		static const Fixed& max(const Fixed& a, const Fixed& b);

	private:
		int _rawValue;
		static const int _fractionalBits = 8;
};

/**
 * @brief Output stream operator
 */
std::ostream& operator<<(std::ostream& os, const Fixed& value);

#endif
