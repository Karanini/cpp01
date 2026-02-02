/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: michel_32 <michel_32@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 14:42:36 by bkaras-g          #+#    #+#             */
/*   Updated: 2026/02/02 13:04:57 by michel_32        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
#define HARL_H

#include <string>
#include <iostream>

class	Harl
{
typedef		void(Harl::*function_ptr)();
private:
	void 	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);
	function_ptr	functions[4];
	std::string	levels_tab[4];
public:
	Harl();
	void	complain(std::string level);
	// void	(Harl::*debug_ptr)(void)[4];
};

#endif
