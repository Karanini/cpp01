/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: michel_32 <michel_32@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 18:09:11 by michel_32         #+#    #+#             */
/*   Updated: 2026/01/27 13:24:29 by michel_32        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    int nb_zombies = 32;

    Zombie  *Freddy_hordy = zombieHorde(nb_zombies, "Freddy");
    for (int i = 0; i < nb_zombies; i++)
        Freddy_hordy[i].announce();
    delete [] Freddy_hordy;
    return (0);
}