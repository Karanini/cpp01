/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: michel_32 <michel_32@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 13:11:27 by michel_32         #+#    #+#             */
/*   Updated: 2026/01/27 13:12:09 by michel_32        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
    Zombie  *zombie_horde = new Zombie[N];

    for (int i = 0; i < N; i++)
        zombie_horde[i].setName(name);
    return (zombie_horde);
}