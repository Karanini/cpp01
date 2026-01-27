/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: michel_32 <michel_32@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 17:37:26 by michel_32         #+#    #+#             */
/*   Updated: 2026/01/27 18:06:33 by michel_32        ###   ########.fr       */
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
    const std::string &getType();
    void    setType(std::string type);
};

#endif