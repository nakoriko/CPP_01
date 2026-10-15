/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakoriko <nakoriko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 12:22:18 by nakoriko          #+#    #+#             */
/*   Updated: 2025/07/10 17:29:59 by nakoriko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(std::string name) : name(name) {}
Zombie::Zombie() : name("") {}

Zombie::~Zombie() {
	std::cout << name << " destroyed" << std::endl;
}

void	Zombie::setName(const std::string &name) { // visto che stringa e' un ogetto, e non array, 
	this->name = name;
}

void Zombie::announce() {
	std::cout << name << " BraiiiiinnnzzzZ..." << std::endl;
}