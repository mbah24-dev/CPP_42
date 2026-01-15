/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbah <mbah@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 15:33:11 by mbah              #+#    #+#             */
/*   Updated: 2026/01/09 16:05:02 by mbah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"
#include <cctype>
#include <iostream>

/* ************************************************************************** */
/*                         Constructors / Destructor                          */
/* ************************************************************************** */

Contact::Contact()
	: _firstName(), _lastName(), _alias(), _phoneNumber(), _confidentialInfo() {}

Contact::~Contact() {}

/* ************************************************************************** */
/*                               Private Helpers                              */
/* ************************************************************************** */

/**
 * @brief Checks if a string contains only alphabetic characters,
 * spaces or hyphens.
 */
bool Contact::_isAlpha(const std::string& value) const {
	for (size_t i = 0; i < value.length(); ++i) {
		if (!std::isalpha(value[i]) && value[i] != ' ' && value[i] != '-')
			return false;
	}
	return true;
}

/**
 * @brief Checks if a string contains only digits, spaces or hyphens.
 */
bool Contact::_isNumeric(const std::string& value) const {
	for (size_t i = 0; i < value.length(); ++i) {
		if (!std::isdigit(value[i]) && value[i] != ' ' && value[i] != '-')
			return false;
	}
	return true;
}

/* ************************************************************************** */
/*                                  Setters                                   */
/* ************************************************************************** */

void Contact::setFirstName(const std::string& value) {
	if (value.empty() || !_isAlpha(value))
		throw std::runtime_error("Invalid first name");
	_firstName = value;
}

void Contact::setLastName(const std::string& value) {
	if (value.empty() || !_isAlpha(value))
		throw std::runtime_error("Invalid last name");
	_lastName = value;
}

void Contact::setAlias(const std::string& value) {
	if (value.empty())
		throw std::runtime_error("Invalid nickname");
	_alias = value;
}

void Contact::setPhoneNumber(const std::string& value) {
	if (value.empty() || !_isNumeric(value))
		throw std::runtime_error("Invalid phone number");
	_phoneNumber = value;
}

void Contact::setConfidentialInfo(const std::string& value) {
	if (value.empty())
		throw std::runtime_error("Invalid secret");
	_confidentialInfo = value;
}

/* ************************************************************************** */
/*                                  Getters                                   */
/* ************************************************************************** */

const std::string& Contact::getFirstName() const { return _firstName; }
const std::string& Contact::getLastName() const { return _lastName; }
const std::string& Contact::getAlias() const { return _alias; }
const std::string& Contact::getPhoneNumber() const { return _phoneNumber; }
const std::string& Contact::getConfidentialInfo() const { return _confidentialInfo; }

/* ************************************************************************** */
/*                              Public Methods                                */
/* ************************************************************************** */

/**
 * @brief Returns true if all fields are filled.
 */
bool Contact::isDefined() const {
	return !_firstName.empty() && !_lastName.empty()
		&& !_alias.empty() && !_phoneNumber.empty()
		&& !_confidentialInfo.empty();
}
