/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaras-g <bkaras-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 14:42:36 by bkaras-g          #+#    #+#             */
/*   Updated: 2026/01/29 15:52:18 by bkaras-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
#define HARL_H

#include <string>
#include <iostream>

class	Harl
{
private:
	void 	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);
public:
	void	complain(std::string level);
	void	(Harl::*debug_ptr)(void);
};

#endif
