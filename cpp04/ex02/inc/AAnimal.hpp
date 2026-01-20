/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbah <mbah@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 00:31:34 by mbah              #+#    #+#             */
/*   Updated: 2026/01/20 02:01:51 by mbah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_H
#define AANIMAL_H

#include <string>

class AAnimal
{
public:
    AAnimal(void);
    AAnimal(AAnimal const & src);
    virtual ~AAnimal(void);

    AAnimal & operator=(AAnimal const & src);

    virtual void makeSound(void) const = 0; // pure virtual

protected:
    std::string _type;
};

#endif
