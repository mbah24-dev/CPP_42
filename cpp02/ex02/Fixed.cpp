/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbah <mbah@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 13:16:25 by mbah              #+#    #+#             */
/*   Updated: 2026/01/18 14:17:24 by mbah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

/* ==================== Constructors & Destructor ==================== */

Fixed::Fixed(void) : _rawValue(0) {}

Fixed::Fixed(const Fixed& other)
{
	*this = other;
}

Fixed::Fixed(int value)
{
	_rawValue = value << _fractionalBits;
}

Fixed::Fixed(float value)
{
	_rawValue = static_cast<int>(roundf(value * (1 << _fractionalBits)));
}

Fixed::~Fixed(void) {}

/* ==================== Assignment ==================== */

Fixed& Fixed::operator=(const Fixed& other)
{
	if (this != &other)
		_rawValue = other._rawValue;
	return *this;
}

/* ==================== Comparison operators ==================== */

bool Fixed::operator>(const Fixed& other) const
{
	return _rawValue > other._rawValue;
}

bool Fixed::operator<(const Fixed& other) const
{
	return _rawValue < other._rawValue;
}

bool Fixed::operator>=(const Fixed& other) const
{
	return _rawValue >= other._rawValue;
}

bool Fixed::operator<=(const Fixed& other) const
{
	return _rawValue <= other._rawValue;
}

bool Fixed::operator==(const Fixed& other) const
{
	return _rawValue == other._rawValue;
}

bool Fixed::operator!=(const Fixed& other) const
{
	return _rawValue != other._rawValue;
}

/* ==================== Arithmetic operators ==================== */

Fixed Fixed::operator+(const Fixed& other) const
{
	return Fixed(this->toFloat() + other.toFloat());
}

Fixed Fixed::operator-(const Fixed& other) const
{
	return Fixed(this->toFloat() - other.toFloat());
}

Fixed Fixed::operator*(const Fixed& other) const
{
	return Fixed(this->toFloat() * other.toFloat());
}

Fixed Fixed::operator/(const Fixed& other) const
{
	return Fixed(this->toFloat() / other.toFloat());
}

/* ==================== Increment / Decrement ==================== */

Fixed& Fixed::operator++()
{
	_rawValue += 1;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed previous(*this);
	++(*this);
	return previous;
}

Fixed& Fixed::operator--()
{
	_rawValue -= 1;
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed previous(*this);
	--(*this);
	return previous;
}

/* ==================== Conversion ==================== */

float Fixed::toFloat(void) const
{
	return static_cast<float>(_rawValue) / (1 << _fractionalBits);
}

int Fixed::toInt(void) const
{
	return _rawValue >> _fractionalBits;
}

/* ==================== Raw access ==================== */

int Fixed::getRawBits(void) const
{
	return _rawValue;
}

void Fixed::setRawBits(int raw)
{
	_rawValue = raw;
}

/* ==================== Min / Max ==================== */

Fixed& Fixed::min(Fixed& a, Fixed& b)
{
	return (a <= b) ? a : b;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
	return (a <= b) ? a : b;
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
	return (a >= b) ? a : b;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
	return (a >= b) ? a : b;
}

/* ==================== Stream operator ==================== */

std::ostream& operator<<(std::ostream& os, const Fixed& value)
{
	os << value.toFloat();
	return os;
}
