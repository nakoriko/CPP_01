/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replaceString.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakoriko <nakoriko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 15:12:27 by nakoriko          #+#    #+#             */
/*   Updated: 2025/07/12 15:31:13 by nakoriko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACESTRING_HPP
#define REPLACESTRING_HPP

#include <iostream>
#include <fstream>
#include <string>

class ReplaceString {
public:
    static void     replaceString(std::ifstream& inputFile, std::ofstream& outputFile,
                        const std::string& s1,
                        const std::string& s2);
};

#endif