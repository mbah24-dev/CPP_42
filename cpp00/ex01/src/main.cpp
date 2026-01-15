/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbah <mbah@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 15:39:39 by mbah              #+#    #+#             */
/*   Updated: 2026/01/09 15:49:03 by mbah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"
#include <iostream>

int main() {
	PhoneBook book;
	std::string command;

	std::cout << "Welcome to My Awesome PhoneBook" << std::endl;

	while (true) {
		std::cout << "Command (ADD, SEARCH, EXIT): ";
		if (!std::getline(std::cin, command))
			break;

		for (size_t i = 0; i < command.length(); ++i)
			command[i] = std::toupper(command[i]);

		if (command == "ADD")
			book.addEntry();
		else if (command == "SEARCH")
			book.searchEntry();
		else if (command == "EXIT")
			break;
	}

	std::cout << "Goodbye!" << std::endl;
	return 0;
}
