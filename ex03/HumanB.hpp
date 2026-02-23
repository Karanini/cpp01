/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaras-g <bkaras-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 17:46:58 by michel_32         #+#    #+#             */
/*   Updated: 2026/01/28 13:54:26 by bkaras-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef HUMAN_B
# define HUMAN_B
#include "Weapon.hpp"
#include <string>
#include <iostream>

class HumanB
{
private:
    Weapon *_weapon;
    std::string _name;
public:
	HumanB(const std::string &name);
	void	setWeapon(Weapon &weapon);
    void    attack();
};

#endif
