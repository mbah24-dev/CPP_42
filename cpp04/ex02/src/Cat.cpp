/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbah <mbah@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 00:31:55 by mbah              #+#    #+#             */
/*   Updated: 2026/01/20 01:56:52 by mbah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat(void) : AAnimal(), _brain(new Brain())
{
    _type = "Cat";
    std::cout << "Cat constructor called." << std::endl;
}

Cat::Cat(Cat const & src) : AAnimal(), _brain(NULL)
{
    std::cout << "Cat copy constructor called." << std::endl;
    *this = src;
}

Cat::~Cat(void)
{
    delete _brain;
    std::cout << "Cat destructor called." << std::endl;
}

Cat & Cat::operator=(Cat const & src)
{
    std::cout << "Cat assignment overload operator called." << std::endl;
    if (this != &src)
    {
        _type = src._type;
        if (_brain != NULL)
            delete _brain;
        _brain = new Brain(*src._brain);
    }
    return *this;
}

Brain * Cat::getBrain(void) const
{
    return _brain;
}

void Cat::makeSound(void) const
{
    std::cout << _type << ": Meow~" << std::endl;
}

