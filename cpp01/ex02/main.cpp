/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbah <mbah@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 04:52:06 by mbah              #+#    #+#             */
/*   Updated: 2026/01/15 05:04:13 by mbah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief A pointer is a variable that contains an address and can be null or reassigned.
 *  A reference is an alias of an existing variable,
 *  it cannot be null and must be initialized upon creation.
*/

/* --------------------------- | -------------------------- */

 /**
 * @file main.cpp
 * @brief Demonstrates the difference between a pointer and a reference.
 */

#include <iostream>
#include <string>

int main(void)
{
	/**
	 * Original string
	 */
	std::string const str = "HI THIS IS BRAIN";

	/**
	 * Pointer to the string
	 */
	std::string const *stringPTR = &str;

	/**
	 * Reference to the string
	 */
	std::string const &stringREF = str;

	std::cout << "---- Memory addresses:\n";
	std::cout << "Address of string:\t\t" << &str << "\n";
	std::cout << "Address held by stringPTR:\t" << stringPTR << "\n";
	std::cout << "Address held by stringREF:\t" << &stringREF << std::endl;

	std::cout << "\n---- Values:\n";
	std::cout << "Value of string:\t\t[" << str << "]\n";
	std::cout << "Value pointed to by stringPTR:\t[" << *stringPTR << "]\n";
	std::cout << "Value pointed to by stringREF:\t[" << stringREF << "]" << std::endl;

	return 0;
}
