/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaras-g <bkaras-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 14:29:08 by bkaras-g          #+#    #+#             */
/*   Updated: 2026/01/28 16:48:00 by bkaras-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

// int	main(std::string filename, std::string s1, std::string s2)
// {

// }

int	main(int ac, char *av[])
{
	if (ac != 4)
	{
		std::cerr << "usage: ./filestream filename string_to_replace new_string" << std::endl;
		return (1);
	}

	std::string		str;
	std::string		filename = av[1];
	filename.append(".replace");
	std::ofstream	ofs(filename.c_str());
	std::ifstream	ifs(av[1]);
	if (!ifs.is_open())
	{
		std::cerr << "Error: Could not open file " << av[1] << std::endl;
		return (1);
	}

	std::string::iterator it = str.begin();
	std::string s1 = av[2];
	std::string s2 = av[3];
	size_t			s1_size = s1.size();
	size_t			s2_size = s2.size();
	while (std::getline(ifs, str))
	{
		if (str.compare(str[it], s1_size, s1))
		ofs << str << '\n';
	}

	return (0);
}
