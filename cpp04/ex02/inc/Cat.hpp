/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbah <mbah@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 00:31:38 by mbah              #+#    #+#             */
/*   Updated: 2026/01/20 01:56:14 by mbah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
#define CAT_H

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
{
public:
    Cat(void);
    Cat(Cat const & src);
    ~Cat(void);

    Cat & operator=(Cat const & src);

    Brain * getBrain(void) const;
    void makeSound(void) const;

private:
    Brain * _brain;
};

#endif
