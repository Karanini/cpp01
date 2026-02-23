/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaras-g <bkaras-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 10:45:46 by bkaras-g          #+#    #+#             */
/*   Updated: 2026/01/28 12:11:18 by bkaras-g         ###   ########.fr       */
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
*/
HumanA::HumanA(Weapon &weapon, const std::string &name) : _weapon(weapon), _name(name)
{

}
