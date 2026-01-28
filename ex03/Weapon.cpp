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

Weapon::Weapon(std::string type)
{
	this->_type = type;
}

const std::string &Weapon::getType()
{
    const std::string &type_ref = this->_type;
    return (type_ref);
}

void    Weapon::setType(std::string type)
{
    this->_type = type;
}
