/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakoriko <nakoriko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 17:37:50 by nakoriko          #+#    #+#             */
/*   Updated: 2025/07/11 14:51:26 by nakoriko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main () {
	std::string  str = "HI THIS IS BRAIN";
	std::string* stringPTR = &str; // хранит адрес переменной указывает, мождет быть nullptr, требует * для доступа к значению
	std::string& stringREF = str; // ссылка. хранит псевдоним, альтернативное имя, не занимает памяти, ссылается на существующий объект) 

	std::cout << "MEMORY ADDRESSES" << std::endl;
	std::cout << "str       : " << &str << std::endl;
	std::cout << "stringPTR : " << stringPTR << std::endl; 
	std::cout << "stringREF : " << &stringREF << std::endl;

	std::cout << "\nVALUES" << std::endl;
	std::cout << "str       : " << str << std::endl;
	std::cout << "stringPTR : " << *stringPTR << std::endl;
	std::cout << "stringREF : " << stringREF << std::endl;

	return 0;
}