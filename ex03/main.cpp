/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakoriko <nakoriko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 11:08:18 by nakoriko          #+#    #+#             */
/*   Updated: 2025/07/11 11:46:30 by nakoriko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int main () {
	//weapon tramite ref
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("come other type of club");
		bob.attack();
	}

		// weapon tramite puntatore
	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim ("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("come other type of club");
		jim.attack();
	}
	return 0;
	
}