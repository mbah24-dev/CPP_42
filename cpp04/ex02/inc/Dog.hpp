/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbah <mbah@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 00:31:41 by mbah              #+#    #+#             */
/*   Updated: 2026/01/20 01:57:31 by mbah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
#define DOG_H

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
{
public:
    Dog(void);
    Dog(Dog const & src);
    ~Dog(void);

    Dog & operator=(Dog const & src);

    Brain * getBrain(void) const;
    void makeSound(void) const;

private:
    Brain * _brain;
};

#endif
