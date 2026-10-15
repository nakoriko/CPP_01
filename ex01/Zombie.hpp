/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakoriko <nakoriko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 12:22:15 by nakoriko          #+#    #+#             */
/*   Updated: 2025/07/10 17:06:47 by nakoriko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie {
private:
	std::string name;
public:
	Zombie(std::string name);
	Zombie();
	~Zombie();
	void announce();
	void setName(const std::string &name);

};

Zombie* newZombie(std::string name);
Zombie* zombieHorde(int N, std::string name);
std::string intToString(int n);


#endif