/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbah <mbah@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 00:31:58 by mbah              #+#    #+#             */
/*   Updated: 2026/01/20 01:58:14 by mbah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog(void) : AAnimal(), _brain(new Brain())
{
    _type = "Dog";
    std::cout << "Dog constructor called." << std::endl;
}

Dog::Dog(Dog const & src) : AAnimal(), _brain(NULL)
{
    std::cout << "Dog copy constructor called." << std::endl;
    *this = src;
}

Dog::~Dog(void)
{
    delete _brain;
    std::cout << "Dog destructor called." << std::endl;
}

Dog & Dog::operator=(Dog const & src)
{
    std::cout << "Dog assignment overload operator called." << std::endl;
    if (this != &src)
    {
        _type = src._type;
        if (_brain != NULL)
            delete _brain;
        _brain = new Brain(*src._brain);
    }
    return *this;
}

Brain * Dog::getBrain(void) const
{
    return _brain;
}

void Dog::makeSound(void) const
{
    std::cout << _type << ": Woof!" << std::endl;
}
