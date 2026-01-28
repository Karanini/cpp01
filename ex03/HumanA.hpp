/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaras-g <bkaras-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 17:46:58 by michel_32         #+#    #+#             */
/*   Updated: 2026/01/28 12:05:41 by bkaras-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef HUMAN_A
# define HUMAN_A
#include "Weapon.hpp"
#include <string>
#include <iostream>

class HumanA
{
private:
    Weapon &_weapon;
    std::string _name;
public:
    HumanA(Weapon &weapon, std::string name);
    void    attack();
};

#endif
