/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakoriko <nakoriko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 11:09:49 by nakoriko          #+#    #+#             */
/*   Updated: 2025/07/11 11:46:32 by nakoriko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

class Weapon {
private:
	std::string type;
public:
	Weapon(std::string type); //costruttore con il tipo
	const std::string& getType() const; // tiene il ref 
	void setType(std::string newType); // cambia il type

};

#endif