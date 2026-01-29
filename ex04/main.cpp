/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaras-g <bkaras-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 14:29:08 by bkaras-g          #+#    #+#             */
/*   Updated: 2026/01/29 11:12:46 by bkaras-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

int	get_input(char *filename, std::string *str);

int	main(int ac, char *av[])
{
	if (ac != 4)
	{
		std::cerr << "usage: ./filestream filename string_to_replace new_string" << std::endl;
		return (1);
	}

	std::string		str;
	std::string		filename = av[1];
	std::string s1 = av[2];
	std::string s2 = av[3];
	filename.append(".replace");
	std::ofstream	ofs(filename.c_str());

	// std::string::iterator it = str.begin();

	if (get_input(av[1], &str))
		return (1);
	std::cout << str;

	return (0);
}

int	get_input(char *filename, std::string *str)
{
    std::ifstream	ifs(filename);

    if (!ifs.is_open())
    {
        std::cerr << "Error: Could not open file " << filename << std::endl;
        return (1);
    }
	if (ifs.peek() == std::ifstream::traits_type::eof())
    {
        std::cerr << "Error: File is empty" << std::endl;
        return (1);
    }
    std::string tmp;
    while(std::getline(ifs, tmp))
    {
        if (!str->empty())
            *str += '\n';
        *str += tmp;
    }
    return (0);
}
