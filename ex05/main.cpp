/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakoriko <nakoriko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 18:29:37 by nakoriko          #+#    #+#             */
/*   Updated: 2025/07/12 20:12:14 by nakoriko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"


int main( int ac, char **av)
{
    Harl harl;

    if (ac != 2)
    {
        std::cout << "Complain is missing" << std::endl;
        return 1;
    }
    harl.complain((av[1]));
    return 0;
}