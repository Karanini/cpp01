/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaras-g <bkaras-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 10:53:34 by bkaras-g          #+#    #+#             */
/*   Updated: 2026/01/28 14:05:54 by bkaras-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

int main(void)
{
	Weapon touillette = Weapon("touillette en carton blindé");
	HumanA Rambo = HumanA(touillette, "Rambo the baddest of them all");
	Rambo.attack();
	touillette.setType("touillette en fibre de bambou cosmique");
	Rambo.attack();

	Weapon club = Weapon("sandwich club poulet crudités");
	HumanB jim("Jim");
	jim.setWeapon(club);
	jim.attack();
	club.setType("sandwich club triple XXL ketchup mayo moutarde miel");
	jim.attack();
	return (0);
}
