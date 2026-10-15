/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakoriko <nakoriko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 12:22:02 by nakoriko          #+#    #+#             */
/*   Updated: 2025/07/10 12:56:19 by nakoriko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


int main() {
	Zombie* heapZombie;
	
	heapZombie = newZombie("HeapZombie"); //dentro creamo un zombie con il nome defenitivo
	heapZombie->announce(); 
	delete heapZombie;

	randomChump("StackZombie");
	return(0);
}