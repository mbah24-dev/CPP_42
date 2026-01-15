/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbah <mbah@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 15:23:14 by mbah              #+#    #+#             */
/*   Updated: 2026/01/15 15:23:15 by mbah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

/*
** Replace all occurrences of s1 by s2 in a given string.
** std::string::replace is forbidden, so we rebuild the string manually.
*/
std::string replaceLine(std::string line, const std::string &s1, const std::string &s2)
{
	size_t	pos = 0;

	if (s1.empty())
		return (line);

	while ((pos = line.find(s1, pos)) != std::string::npos)
	{
		line.erase(pos, s1.length());
		line.insert(pos, s2);
		pos += s2.length();
	}
	return (line);
}

int	main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cerr << "Usage: " << av[0] << " <filename> <s1> <s2>" << std::endl;
		return (1);
	}

	std::ifstream	infile(av[1]);
	if (!infile)
	{
		std::cerr << "Error: could not open input file." << std::endl;
		return (1);
	}

	std::ofstream	outfile((std::string(av[1]) + ".replace").c_str());
	if (!outfile)
	{
		std::cerr << "Error: could not create output file." << std::endl;
		return (1);
	}

	std::string	line;
	while (std::getline(infile, line))
	{
		outfile << replaceLine(line, av[2], av[3]);
		if (!infile.eof())
			outfile << std::endl;
	}

	infile.close();
	outfile.close();
	return (0);
}
