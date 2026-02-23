/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: michel_32 <michel_32@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 10:53:34 by bkaras-g          #+#    #+#             */
/*   Updated: 2026/02/23 14:00:00 by michel_32        ###   ########.fr       */
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

// int	main(void)
// {
// 	{
// 		Weapon club = Weapon("crude spiked club");
// 		HumanA bob(club, "Bob");
// 		bob.attack();
// 		club.setType("some other type of club");
// 		bob.attack();
// 	}
// 	{
// 		Weapon club = Weapon("crude spiked club");
// 		HumanB jim("Jim");
// 		jim.setWeapon(club);
// 		jim.attack();
// 		club.setType("some other type of club");
// 		jim.attack();
// 	}
// 	return (0);
// }