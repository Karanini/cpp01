/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaras-g <bkaras-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 17:42:49 by michel_32         #+#    #+#             */
/*   Updated: 2026/01/28 11:05:39 by bkaras-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string &type)
{
	this->_type = type;
}

const std::string &Weapon::getType() const
{
    return (this->_type);
}

void    Weapon::setType(const std::string &type)
{
    this->_type = type;
}
