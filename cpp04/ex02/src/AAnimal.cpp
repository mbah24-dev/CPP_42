/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbah <mbah@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 00:31:51 by mbah              #+#    #+#             */
/*   Updated: 2026/01/20 01:53:16 by mbah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include <iostream>

AAnimal::AAnimal(void) : _type("Unknown Beast")
{
    std::cout << "Animal default constructor called." << std::endl;
}

AAnimal::AAnimal(AAnimal const & src)
{
    std::cout << "Animal copy constructor called." << std::endl;
    *this = src;
}

AAnimal::~AAnimal(void)
{
    std::cout << "Animal destructor called." << std::endl;
}

AAnimal & AAnimal::operator=(AAnimal const & src)
{
    std::cout << "Animal assignment overload operator called." << std::endl;
    if (this != &src)
        this->_type = src._type;
    return *this;
}
