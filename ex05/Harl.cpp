/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakoriko <nakoriko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 18:30:04 by nakoriko          #+#    #+#             */
/*   Updated: 2025/07/12 21:25:07 by nakoriko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Harl.hpp"

void Harl::debug(void) {
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger.\n";
    std::cout << "I really do!\n" << std::endl;
}

void Harl::info(void) {
    std::cout << "I cannot believe adding extra bacon costs more money.\n";
    std::cout << " You didn’t put enough bacon in my burger!.\n";
    std::cout << "If you did, I wouldn’t be asking for more!\n" << std::endl;
}

void Harl::warning(void) {
    std::cout << "I think I deserve to have some extra bacon for free.\n";
    std::cout << "I’ve been coming for years,\n";
    std::cout << "whereas you started working here just last month.\n" << std::endl;
}

void Harl::error(void) {
    std::cout << "This is unacceptable!\n";
    std::cout << " I want to speak to the manager now.\n" << std::endl;
}

void Harl::complain(std::string level) {
    std::string levels[4];

    levels[0] = "DEBUG";
    levels[1] = "INFO";
    levels[2] = "WARNING";
    levels[3] = "ERROR";
    
    // creazione di array di puntatori, ogniuno contiene indirizo su medodo di harl(debug/info etc)
    ComplainFunction functions[4];
//&this->debug(); non puo prendeere indirizio tramite this
    functions[0] = &Harl::debug;
    functions[1] = &Harl::info;
    functions[2] = &Harl::warning;
    functions[3] = &Harl::error;

    int i = 0;
    while (i < 4)
    {
        if(level == levels[i]) {
            //this - puntatore su ogetto attuale
            // function[i] - puntatore su metodo dal array
            // * - serve per avere acesso non al ppuntatore, ma al metodo al quale punta
            (this->*functions[i])();
            return ;
        }
        i++;
    }
    std::cout << "Unknown complain" << std::endl;
}