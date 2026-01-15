/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbah <mbah@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 16:11:49 by mbah              #+#    #+#             */
/*   Updated: 2026/01/07 13:22:45 by mbah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv)
{
	std::string const default_msg = "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	int	i;

	if (argc == 1)
		std::cout << default_msg;
	i = 1;
	while (argv[i])
	{
		std::string str = argv[i];
		for (std::string::iterator iter = str.begin(); iter != str.end(); iter++)
		{
			*iter = std::toupper(*iter);
		}
		std::cout << str;
		i++;
	}
	std::cout << std::endl;
	return (0);
}
