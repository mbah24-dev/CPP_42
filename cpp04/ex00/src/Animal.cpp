/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbah <mbah@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 00:31:51 by mbah              #+#    #+#             */
/*   Updated: 2026/01/20 00:33:20 by mbah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

Animal::Animal() : _type("Animal")
{
	std::cout << "[Animal] Constructor called" << std::endl;
}

Animal::Animal(const Animal& other) : _type(other._type)
{
	std::cout << "[Animal] Copy constructor called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "[Animal] Destructor called" << std::endl;
}

Animal& Animal::operator=(const Animal& other)
{
	if (this != &other)
		_type = other._type;
	return *this;
}

const std::string& Animal::getType() const
{
	return _type;
}

void Animal::makeSound() const
{
	std::cout << "* generic animal noise *" << std::endl;
}
