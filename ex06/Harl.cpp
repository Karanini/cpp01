/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: michel_32 <michel_32@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 15:17:21 by bkaras-g          #+#    #+#             */
/*   Updated: 2026/02/02 13:24:21 by michel_32        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

typedef		void(Harl::*function_ptr)();

//C++98 strictly requires the & operator for member function pointers.
Harl::Harl()
{
	this->functions[0] = &Harl::debug;
    this->functions[1] = &Harl::info;
    this->functions[2] = &Harl::warning;
    this->functions[3] = &Harl::error;
	this->levels_tab[0] = "debug";
	this->levels_tab[1] = "info";
	this->levels_tab[2] = "warning";
	this->levels_tab[3] = "error";
}

void	Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money." << std::endl;
}

void Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;

}

void	Harl::complain(std::string level)
{
	for(int i = 0; i < 4; i++)
	{
		if (!this->levels_tab[i].compare(level))
			(this->*functions[i])();
	}
}
