/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakoriko <nakoriko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 16:09:30 by nakoriko          #+#    #+#             */
/*   Updated: 2025/07/10 17:36:01 by nakoriko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {
	int N = 5;
	Zombie* horde;

	if (N <= 0) {
		std::cout << "Wrong zombies number" << std::endl;
		return 0;
	}
	horde = zombieHorde(N, "Zombie_");
	int i = 0;
	while (i < N)
	{
		horde[i].announce();
		i++;
	}
	delete[] horde;
	return 0;
}