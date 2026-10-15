/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakoriko <nakoriko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 18:29:53 by nakoriko          #+#    #+#             */
/*   Updated: 2025/07/12 21:22:18 by nakoriko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>

class Harl {
private:
     void debug(void);
     void info(void);
     void warning(void);
     void error(void);

     typedef void (Harl::*ComplainFunction) (void);
public:
    void complain(std::string level);

};

#endif