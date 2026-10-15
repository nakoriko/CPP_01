/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replaceString.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakoriko <nakoriko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 15:12:30 by nakoriko          #+#    #+#             */
/*   Updated: 2025/07/12 15:18:05 by nakoriko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replaceString.hpp"


void     ReplaceString::replaceString(std::ifstream& inputFile, std::ofstream& outputFile, const std::string& s1, const std::string& s2) {
    std::string line;

    while (std::getline(inputFile, line))
    {
            size_t pos = 0;
            while ((pos = line.find(s1, pos)) != std::string::npos) {
                line.erase (pos, s1.length());
                line.insert(pos, s2); 
                pos = pos + s2.length();
            }
            outputFile << line;
            if(!inputFile.eof()) {
                outputFile << std::endl;
            }
    }

}