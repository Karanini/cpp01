/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaras-g <bkaras-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 14:42:18 by bkaras-g          #+#    #+#             */
/*   Updated: 2026/01/29 15:28:34 by bkaras-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char *av[])
{
	if (ac != 2)
	{
		std::cout << "usage: ./Harl level" << std::endl;
		return (1);
	}
	Harl	harl;
	harl.complain(av[1]);
	return (0);
}
