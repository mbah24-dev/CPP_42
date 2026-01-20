/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbah <mbah@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 00:57:25 by mbah              #+#    #+#             */
/*   Updated: 2026/01/20 02:02:00 by mbah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
#define BRAIN_H

#include <string>

class Brain
{
public:
    Brain(void);
    Brain(Brain const & src);
    ~Brain(void);

    Brain & operator=(Brain const & src);

    std::string const & getIdea(int index) const;
    void setIdea(int index, const std::string & idea);

    static int const nb_ideas = 100;

private:
    std::string _ideas[nb_ideas];
};

#endif
