/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: michel_32 <michel_32@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 15:17:21 by bkaras-g          #+#    #+#             */
/*   Updated: 2026/02/02 13:48:37 by michel_32        ###   ########.fr       */
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
	this->levels_tab[0] = "DEBUG";
	this->levels_tab[1] = "INFO";
	this->levels_tab[2] = "WARNING";
	this->levels_tab[3] = "ERROR";
}

void	Harl::debug(void)
{
	std::cout << "[ DEBUG ]" << '\n';
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << '\n';
	std::cout << std::endl;
}

void Harl::info(void)
{
	std::cout << "[ INFO ]" << '\n';
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << '\n';
	std::cout << std::endl;
}

void Harl::warning(void)
{
	std::cout << "[ WARNING ]" << '\n';
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << '\n';
	std::cout << std::endl;
}

void	Harl::error(void)
{
	std::cout << "[ ERROR ]" << '\n';
	std::cout << "This is unacceptable! I want to speak to the manager now." << '\n';
	std::cout << std::endl;
}

void	Harl::complain(std::string level)
{
	int	choice = 32;

	for(int i = 0; i < 4; i++)
	{
		if (!this->levels_tab[i].compare(level))
			choice = i;
	}
	switch (choice)
	{
	case 32:
	{
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		break;
	}
	default:
	{
		for(int i = choice; i < 4; i++)
			(this->*functions[i])();
		break;
	}
	}
}
