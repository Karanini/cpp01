/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaras-g <bkaras-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 10:49:45 by bkaras-g          #+#    #+#             */
/*   Updated: 2026/01/28 14:14:25 by bkaras-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

/*
* You do not need new here because HumanB is designed to point to an existing
Weapon created elsewhere (in main), rather than creating and owning a new one itself.
*/
HumanB::HumanB(std::string name)
{
	this->_name = name;
	this->_weapon = NULL;
}

void	HumanB::attack()
{
	std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
}

/*
* need to pass a reference to weapon as a param of this function. If you pass just
the weapon object, it makes a copy of it in the function, so this->_weapon grabs
* the adress of a copy that is destroyed at the end of the function. The pointer
* becomes dangling.
*/
void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}
