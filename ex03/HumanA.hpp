/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: michel_32 <michel_32@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 17:46:58 by michel_32         #+#    #+#             */
/*   Updated: 2026/01/27 18:03:14 by michel_32        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef HUMAN_A
# define HUMAN_A
#include "Weapon.hpp"

class HumanA
{
private:
    Weapon _weapon;
    std::string _name;
public:
    HumanA(Weapon weapon);
    void    attack();
};

#endif