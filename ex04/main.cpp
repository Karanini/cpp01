/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaras-g <bkaras-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 14:29:08 by bkaras-g          #+#    #+#             */
/*   Updated: 2026/01/29 12:22:12 by bkaras-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

int	get_input(char *filename, std::string *str);
void	replace_occurences(std::string *str, char *av[]);

int	main(int ac, char *av[])
{
	if (ac != 4)
	{
		std::cerr << "usage: ./copy_and_replace filename string_to_replace new_string" << std::endl;
		return (1);
	}

	std::string		str;
	std::string		filename = av[1];
	filename += ".replace";
	std::ofstream	ofs(filename.c_str());

	if (get_input(av[1], &str))
		return (1);
	replace_occurences(&str, av);
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

void	replace_occurences(std::string *str, char *av[])
{
	std::string s1 = av[2];
	std::string s2 = av[3];
	size_t	s1_size = s1.size();
	std::string::iterator it = (*str).begin();
	while (*it)
	{
		if (!(*str).compare(it - (*str).begin(), s1_size, s1))
		{
			size_t pos = it - (*str).begin(); //need to save the pos because erase/insert invalidates any iterator of (*str)
			(*str).erase(pos, s1_size);
			(*str).insert(pos, s2);
			it = (*str).begin() + pos + s2.size() - 1; //restore 'it', -1 because it++ just after this line
		}
		it++;
	}
}
