/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakoriko <nakoriko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 11:09:46 by nakoriko          #+#    #+#             */
/*   Updated: 2025/07/11 11:18:24 by nakoriko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <iostream>

Weapon::Weapon(std::string type) : type(type) {}

const std::string& Weapon::getType() const  {
	return type;
}

void Weapon::setType (std::string newType) {
	type = newType;
}
