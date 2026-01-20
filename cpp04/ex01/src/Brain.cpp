/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbah <mbah@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 00:58:02 by mbah              #+#    #+#             */
/*   Updated: 2026/01/20 01:02:52 by mbah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>

Brain::Brain()
{
	std::cout << "[Brain] Constructor\n";
}

Brain::Brain(const Brain& other)
{
	std::cout << "[Brain] Copy constructor\n";
	*this = other;
}

Brain::~Brain()
{
	std::cout << "[Brain] Destructor\n";
}

Brain& Brain::operator=(const Brain& other)
{
	for (int i = 0; i < 100; i++)
		_ideas[i] = other._ideas[i];
	return *this;
}

const std::string& Brain::getIdea(int index) const
{
	return _ideas[index % 100];
}

void Brain::setIdea(int index, const std::string& idea)
{
	_ideas[index % 100] = idea;
}
