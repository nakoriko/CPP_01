/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakoriko <nakoriko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 15:42:14 by nakoriko          #+#    #+#             */
/*   Updated: 2025/07/10 17:32:24 by nakoriko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

std::string intToString(int n)
{
	std::string result;

	if (n == 0)
		return "0";
	while (n > 0) {
		result = static_cast<char>((n % 10) + '0') + result;
		n = n / 10;
	}
	return result;
}


Zombie* zombieHorde(int N, std::string name) {
	Zombie* horde = new Zombie[N];

	int i = 0;

	while (i < N)
	{
		horde[i].setName(name + intToString(i + 1));
		i++;
	}
	return horde;
}