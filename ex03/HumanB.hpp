/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: michel_32 <michel_32@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 17:46:58 by michel_32         #+#    #+#             */
/*   Updated: 2026/01/27 18:06:29 by michel_32        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef HUMAN_B
# define HUMAN_B
#include "Weapon.hpp"

class HumanB
{
private:
    Weapon _weapon;
    std::string _name;
public:
    void    attack();
};

#endif