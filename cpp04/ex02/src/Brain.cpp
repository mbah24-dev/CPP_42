/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbah <mbah@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 00:58:02 by mbah              #+#    #+#             */
/*   Updated: 2026/01/20 01:54:56 by mbah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>

Brain::Brain(void)
{
    std::cout << "Brain default constructor called." << std::endl;
}

Brain::Brain(Brain const & src)
{
    std::cout << "Brain copy constructor called." << std::endl;
    *this = src;
}

Brain::~Brain(void)
{
    std::cout << "Brain destructor called." << std::endl;
}

Brain & Brain::operator=(Brain const & src)
{
    std::cout << "Brain assignment overload operator called." << std::endl;
    for (int i = 0; i < nb_ideas; i++)
        _ideas[i] = src._ideas[i];
    return *this;
}

std::string const & Brain::getIdea(int index) const
{
    if (index < 0) index = 0;
    return _ideas[index % nb_ideas];
}

void Brain::setIdea(int index, const std::string & idea)
{
    if (index < 0) return;
    _ideas[index % nb_ideas] = idea;
}
