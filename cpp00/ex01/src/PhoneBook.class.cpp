/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbah <mbah@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 15:18:30 by mbah              #+#    #+#             */
/*   Updated: 2026/01/09 16:06:15 by mbah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"
#include <iomanip>
#include <iostream>
#include <stdexcept>

/* ************************************************************************** */
/*                         Constructors / Destructor                          */
/* ************************************************************************** */

PhoneBook::PhoneBook() : _nextSlot(0), _storedCount(0) {}

PhoneBook::~PhoneBook() {}

/* ************************************************************************** */
/*                               Private Helpers                              */
/* ************************************************************************** */

std::string PhoneBook::_readLine(const std::string& prompt) const {
	std::string input;

	std::cout << prompt << ": ";
	if (!std::getline(std::cin, input))
		return "";
	return input;
}

void PhoneBook::_printColumn(const std::string& text) const {
	if (text.length() > 10)
		std::cout << std::setw(10) << text.substr(0, 9) + ".";
	else
		std::cout << std::setw(10) << text;
	std::cout << "|";
}

void PhoneBook::_showTable() const {
	std::cout << "+----------+----------+----------+----------+" << std::endl;
	std::cout << "|     INDEX|FIRST NAME| LAST NAME|  NICKNAME|" << std::endl;
	std::cout << "+----------+----------+----------+----------+" << std::endl;

	for (int i = 0; i < _storedCount; ++i) {
		std::cout << "|" << std::setw(10) << i << "|";
		_printColumn(_entries[i].getFirstName());
		_printColumn(_entries[i].getLastName());
		_printColumn(_entries[i].getAlias());
		std::cout << std::endl;
	}
	std::cout << "+----------+----------+----------+----------+" << std::endl;
}

void PhoneBook::_showContactDetails(int index) const {
	const Contact& c = _entries[index];

	std::cout << "First name      : " << c.getFirstName() << std::endl;
	std::cout << "Last name       : " << c.getLastName() << std::endl;
	std::cout << "Nickname        : " << c.getAlias() << std::endl;
	std::cout << "Phone number    : " << c.getPhoneNumber() << std::endl;
	std::cout << "Darkest secret  : " << c.getConfidentialInfo() << std::endl;
}

/* ************************************************************************** */
/*                              Public Methods                                */
/* ************************************************************************** */

void PhoneBook::addEntry() {
	Contact temp;

	try {
		temp.setFirstName(_readLine("First name"));
		temp.setLastName(_readLine("Last name"));
		temp.setAlias(_readLine("Nickname"));
		temp.setPhoneNumber(_readLine("Phone number"));
		temp.setConfidentialInfo(_readLine("Darkest secret"));
	} catch (const std::exception& e) {
		std::cout << "Error: " << e.what() << std::endl;
		return;
	}

	std::cout << "next slot: " << _nextSlot << std::endl;
	_entries[_nextSlot] = temp;
	_nextSlot = (_nextSlot + 1) % 8;
	if (_storedCount < 8)
		++_storedCount;

	std::cout << "Contact saved successfully." << std::endl;
}

void PhoneBook::searchEntry() const {
	if (_storedCount == 0) {
		std::cout << "PhoneBook is empty." << std::endl;
		return;
	}

	_showTable();

	std::string input = _readLine("Index");
	if (input.length() != 1 || !std::isdigit(input[0])) {
		std::cout << "Invalid index." << std::endl;
		return;
	}

	int index = input[0] - '0';
	if (index < 0 || index >= _storedCount) {
		std::cout << "Index out of range." << std::endl;
		return;
	}

	_showContactDetails(index);
}
