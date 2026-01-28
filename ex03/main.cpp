/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaras-g <bkaras-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 10:53:34 by bkaras-g          #+#    #+#             */
/*   Updated: 2026/01/28 11:03:20 by bkaras-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

int main(void)
{
	Weapon touillette;
	touillette.setType("touillette en carton blindé");
	HumanA Rambo = HumanA(touillette, "Rambo the baddest of them all");
	Rambo.attack();
	return (0);
}
