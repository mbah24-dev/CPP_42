/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbah <mbah@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 15:28:42 by mbah              #+#    #+#             */
/*   Updated: 2026/01/15 15:30:48 by mbah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <string>

/**
 * @class Harl
 * @brief A class that prints predefined complaints depending on a given level.
 */
class Harl
{
	private:
		/**
		 * @brief Prints a debug level complaint.
		 */
		void	debugMessage(void);

		/**
		 * @brief Prints an info level complaint.
		 */
		void	infoMessage(void);

		/**
		 * @brief Prints a warning level complaint.
		 */
		void	warningMessage(void);

		/**
		 * @brief Prints an error level complaint.
		 */
		void	errorMessage(void);

	public:
		/**
		 * @brief Default constructor.
		 */
		Harl(void);

		/**
		 * @brief Destructor.
		 */
		~Harl(void);

		/**
		 * @brief Calls the appropriate complaint depending on the level.
		 * @param level The complaint level.
		 */
		void	complain(std::string level);
};

#endif
