/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaras-g <bkaras-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 17:37:26 by michel_32         #+#    #+#             */
/*   Updated: 2026/01/28 11:05:11 by bkaras-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef WEAPON_H
# define WEAPON_H
#include <string>
#include <iostream>

class   Weapon
{
private:
    std::string _type;
public:
	Weapon(std::string type);
    const std::string &getType();
    void    setType(std::string type);
};

#endif
