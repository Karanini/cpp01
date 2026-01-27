/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: michel_32 <michel_32@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 17:42:49 by michel_32         #+#    #+#             */
/*   Updated: 2026/01/27 17:45:47 by michel_32        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

const std::string &Weapon::getType()
{
    const std::string &type_ref = this->type;
    return (type_ref);
}

void    Weapon::setType(std::string type)
{
    this->type = type;
}