/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: michel_32 <michel_32@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 10:45:46 by bkaras-g          #+#    #+#             */
/*   Updated: 2026/02/23 13:54:54 by michel_32        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void	HumanA::attack()
{
	std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}

/*
Need to use an init list here so that the reference is properly initialized.
The variables are always initialized before the start of the constructor.
Since references must be initialized upon creation and cannot be reassigned,
(you can't use = in the constructor body),
you must use the Member Initializer List.

We pass a reference to weapon instead of passing by value, so that we keep the 
adress of the weapon. If I make some changes to the weapon using setType(),the 
changes are also reflected on the weapon held by HumanA. 
*/
HumanA::HumanA(Weapon &weapon, const std::string &name) : _weapon(weapon), _name(name)
{

}
