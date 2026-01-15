/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbah <mbah@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 15:28:38 by mbah              #+#    #+#             */
/*   Updated: 2026/01/15 15:40:12 by mbah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

/* Constructor */
Harl::Harl(void) {}

/* Destructor */
Harl::~Harl(void) {}

/* ===================== PRIVATE METHODS ===================== */

void	Harl::debugMessage(void)
{
	std::cout << "[ DEBUG ]\n"
		<< "I love having extra bacon for my "
		<< "7XL-double-cheese-triple-pickle-specialketchup burger. "
		<< "I really do!"
		<< std::endl;
}

void	Harl::infoMessage(void)
{
	std::cout << "[ INFO ]\n"
		<< "I cannot believe adding extra bacon costs more money. "
		<< "You didn’t put enough bacon in my burger! "
		<< "If you did, I wouldn’t be asking for more!"
		<< std::endl;
}

void	Harl::warningMessage(void)
{
	std::cout << "[ WARNING ]\n"
		<< "I think I deserve extra bacon for free. "
		<< "I’ve been coming for years and you started working here last month."
		<< std::endl;
}

void	Harl::errorMessage(void)
{
	std::cout << "[ ERROR ]\n"
		<< "This is unacceptable! I want to speak to the manager now."
		<< std::endl;
}

/* ===================== PUBLIC METHOD ===================== */

void	Harl::complain(std::string level)
{
	/*
	 * Action is a pointer to a member function of Harl that returns nothing and takes no parameters.
	*/
	typedef void (Harl::*Action)(void);

	std::string	levels[] = { "DEBUG", "INFO", "WARNING", "ERROR" };
	Action		actions[] = {
		&Harl::debugMessage,
		&Harl::infoMessage,
		&Harl::warningMessage,
		&Harl::errorMessage
	};

	for (int i = 0; i < 4; i++)
	{
		if (levels[i] == level)
		{
			(this->*actions[i])(); //call the associate function
			return;
		}
	}
}
