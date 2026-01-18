/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbah <mbah@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 13:16:25 by mbah              #+#    #+#             */
/*   Updated: 2026/01/18 14:17:42 by mbah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

/* ================= CONSTRUCTORS & DESTRUCTOR ================= */

Fixed::Fixed(void) : _rawValue(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed::Fixed(int value)
{
	std::cout << "Int constructor called" << std::endl;
	_rawValue = value << _fractionBits;
}

Fixed::Fixed(float value)
{
	std::cout << "Float constructor called" << std::endl;
	_rawValue = static_cast<int>(roundf(value * (1 << _fractionBits)));
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

/* ================= OPERATOR OVERLOAD ================= */

Fixed &Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		_rawValue = other.getRawBits();
	return (*this);
}

/* ================= GETTERS / SETTERS ================= */

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (_rawValue);
}

void Fixed::setRawBits(int raw)
{
	_rawValue = raw;
}

/* ================= CONVERSIONS ================= */

float Fixed::toFloat(void) const
{
	return static_cast<float>(_rawValue) / (1 << _fractionBits);
}

int Fixed::toInt(void) const
{
	return _rawValue >> _fractionBits;
}

/* ================= STREAM OPERATOR ================= */

std::ostream &operator<<(std::ostream &os, const Fixed &number)
{
	os << number.toFloat();
	return (os);
}
