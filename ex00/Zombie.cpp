/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: michel_32 <michel_32@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 17:51:57 by michel_32         #+#    #+#             */
/*   Updated: 2026/02/23 11:54:40 by michel_32        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void    z::announce()
{
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

z::Zombie(std::string name)
{
    this->_name = name;
}

z::~Zombie()
{
    std::cout << this->_name << " has been destroyed have a nice one BYYYEEE" << std::endl;
}

Zombie  *newZombie(std::string name)
{
    Zombie  *newbie = new Zombie(name);

    return (newbie);
}

void    randomChump(std::string name)
{
    Zombie new_chump = Zombie(name);
    new_chump.announce();
}